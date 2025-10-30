int __fastcall sub_11D23C(struct obstack *a1, struct _obstack_chunk *a2)
{
  int v4; // r1

  memset(a1, 0, 0xC8u);
  v4 = *(_DWORD *)a2[1].contents;
  a2[1].prev = (struct _obstack_chunk *)a1;
  a1[3].chunk = a2;
  a1->chunk_size = v4;
  return obstack_begin(a1 + 2, 0, 0, (void *(*)(int))sub_93028, (void (*)(void *))&loc_11C838);
}
