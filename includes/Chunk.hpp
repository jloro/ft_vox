/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Chunk.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 11:30:12 by jules             #+#    #+#             */
/*   Updated: 2019/08/28 12:44:08 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHUNK_HPP
# define CHUNK_HPP

# include "list"
# include "Shader.hpp"
# include <vector>
class Chunk
{
	public:
		Chunk(void);
		virtual	~Chunk();

		static const int CHUNK_SIZE = 16;

		void	CreateMesh();
		//void	Draw(Shader* shader) const;
		void	Draw() const;
	private:
		Shader*	_shader;
		void	_CreateCube(float x, float y, float z);
		void	_SendToOpenGL();

		std::vector<float>	_vertices;
		std::vector<unsigned int>	_indices;
		unsigned int	_vao;
		unsigned int	_vbo;
		unsigned int	_ebo;
};

#endif
