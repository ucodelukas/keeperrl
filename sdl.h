#pragma once

#ifdef WINDOWS
#ifndef _WINDOWS_
#define _WINDOWS_
#define APIENTRY __attribute__((__stdcall__))
#define WINGDIAPI __attribute__((dllimport))
#endif
#else
#define GL_GLEXT_PROTOTYPES 1
#endif

namespace SDL {
#ifdef VSTUDIO
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_opengl.h>
#include <SDL_opengl_glext.h>
#else
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_opengl.h>
#include <SDL2/SDL_opengl_glext.h>
#endif
}

#undef TECHNOLOGY
#undef TRANSPARENT

using SDL::Uint8;

typedef SDL::SDL_Event Event;
typedef SDL::SDL_EventType EventType;
