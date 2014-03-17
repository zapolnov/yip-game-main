/* vim: set ai noet ts=4 sw=4 tw=115: */
//
// Copyright (c) 2014 Nikolay Zapolnov (zapolnov@gmail.com).
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
#include "game_main.h"
#include <cassert>

extern "C" void * c9737b5fd();

Game::Main::Main() noexcept
	: m_ViewportWidth(0),
	  m_ViewportHeight(0)
{
}

Game::Main::~Main() noexcept
{
}

Game::Main * Game::Main::instance() noexcept
{
	return reinterpret_cast<Game::Main *>(c9737b5fd());
}

const GL::ResourceManagerPtr & Game::Main::resourceManager() const
{
	if (LIKELY(m_ResourceManager))
		return m_ResourceManager;
	m_ResourceManager = std::make_shared<GL::ResourceManager>();
	return m_ResourceManager;
}

void Game::Main::configureOpenGL(OpenGLInitOptions & options)
{
	(void)options;
}

void Game::Main::onMouseButtonDown(int x, int y, Sys::MouseButton button)
{
	(void)x;
	(void)y;
	(void)button;
}

void Game::Main::onMouseButtonUp(int x, int y, Sys::MouseButton button)
{
	(void)x;
	(void)y;
	(void)button;
}

void Game::Main::onMouseMove(int x, int y)
{
	(void)x;
	(void)y;
}

void Game::Main::onKeyPress(Sys::KeyCode key)
{
	(void)key;
}

void Game::Main::onKeyRelease(Sys::KeyCode key)
{
	(void)key;
}

void Game::Main::onCharInput(uint16_t ch)
{
	(void)ch;
}
