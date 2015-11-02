/*
** mruby/gc.h - garbage collector for mruby
**
** See Copyright Notice in mruby.h
*/

#ifndef MRUBY_GC_H
#define MRUBY_GC_H

#include "mruby/common.h"

/**
 * Uncommon memory management stuffs.
 */
MRB_BEGIN_DECL

typedef void (mrb_each_object_callback)(mrb_state *mrb, struct RBasic *obj, void *data);
void mrb_objspace_each_objects(mrb_state *mrb, mrb_each_object_callback *callback, void *data);
MRB_API void mrb_free_context(mrb_state *mrb, struct mrb_context *c);

MRB_END_DECL

#endif  /* MRUBY_GC_H */