_DWORD *__fastcall sub_84C5C(_DWORD *a1, void *src, unsigned int a3, const void *a4, unsigned int a5)
{
  void *v8; // r12
  _BYTE *v10; // r2
  void *v11; // r0
  unsigned int v12; // r3
  _BYTE *v13; // r2
  int v15; // r3

  v8 = (void *)dword_4750A8;
  if ( dword_4750A8 <= (unsigned int)dword_4750A4 || dword_4750A8 >= (unsigned int)dword_4750B0 )
  {
    obstack_free((struct obstack *)&unk_4750A0, (void *)dword_4750A8);
    v8 = (void *)dword_4750AC;
    if ( a3 <= dword_4750B0 - dword_4750AC )
      goto LABEL_6;
    goto LABEL_14;
  }
  dword_4750AC = dword_4750A8;
  if ( a3 > dword_4750B0 - dword_4750A8 )
  {
LABEL_14:
    obstack_newchunk((struct obstack *)&unk_4750A0, a3);
    v8 = (void *)dword_4750AC;
  }
LABEL_6:
  memcpy(v8, src, a3);
  v10 = (_BYTE *)(dword_4750AC + a3);
  dword_4750AC = (int)v10;
  if ( (_BYTE *)dword_4750B0 == v10 )
  {
    obstack_newchunk((struct obstack *)&unk_4750A0, 1);
    v10 = (_BYTE *)dword_4750AC;
  }
  *v10 = 46;
  v11 = (void *)(dword_4750AC + 1);
  v12 = dword_4750B0 - ++dword_4750AC;
  if ( a5 > v12 )
  {
    obstack_newchunk((struct obstack *)&unk_4750A0, a5);
    v11 = (void *)dword_4750AC;
  }
  memcpy(v11, a4, a5);
  v13 = (_BYTE *)(dword_4750AC + a5);
  dword_4750AC = (int)v13;
  if ( (_BYTE *)dword_4750B0 == v13 )
  {
    obstack_newchunk((struct obstack *)&unk_4750A0, 1);
    v13 = (_BYTE *)dword_4750AC;
  }
  *v13 = 0;
  v15 = ++dword_4750AC - dword_4750A8 - 1;
  *a1 = dword_4750A8;
  a1[1] = v15;
  return a1;
}
