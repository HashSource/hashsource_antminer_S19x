int __fastcall sub_C1DDC(struct obstack *a1)
{
  if ( a1[1].next_free )
    return obstack_memory_used(a1);
  else
    return 0;
}
