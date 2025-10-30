int __fastcall sub_173008(int result)
{
  int v1; // r3
  int v2; // r5
  int v3; // r4
  int v4; // r1
  int v5; // r3
  char v6; // r2
  void *v7; // r12
  void *v8; // r3
  int v9; // r0
  bool v10; // zf
  int v11; // r3

  v1 = *(_DWORD *)(result + 24);
  if ( (*(_WORD *)(v1 + 2) & 0x380) != 0x80 || *(__int16 **)(v1 + 28) == &word_3B4A2C )
  {
    v2 = result;
    v10 = (*(_WORD *)(v1 + 2) & 0x10) == 0;
    *(_WORD *)(v1 + 2) = *(_WORD *)(v1 + 2) & 0xFC7F | 0x80;
    if ( v10 )
    {
      v7 = sub_93028(0x38u);
    }
    else
    {
      v3 = *(_DWORD *)(v1 + 16);
      v4 = *(_DWORD *)(v3 + 64);
      v5 = *(_DWORD *)(v3 + 60);
      v6 = v4 - v5;
      if ( (unsigned int)(v4 - v5) <= 0x37 )
      {
        obstack_newchunk((struct obstack *)(v3 + 48), 56);
        v5 = *(_DWORD *)(v3 + 60);
        v4 = *(_DWORD *)(v3 + 64);
      }
      v7 = *(void **)(v3 + 56);
      v8 = (void *)(v5 + 56);
      v9 = *(_DWORD *)(v3 + 72);
      *(_DWORD *)(v3 + 60) = v8;
      v10 = v8 == v7;
      if ( v8 == v7 )
        v6 = *(_BYTE *)(v3 + 88);
      v11 = ((unsigned int)v8 + v9) & ~v9;
      *(_DWORD *)(v3 + 60) = v11;
      if ( v10 )
        *(_BYTE *)(v3 + 88) = v6 | 2;
      if ( v11 - *(_DWORD *)(v3 + 52) > (unsigned int)(v4 - *(_DWORD *)(v3 + 52)) )
      {
        v11 = v4;
        *(_DWORD *)(v3 + 60) = v4;
      }
      *(_DWORD *)(v3 + 56) = v11;
    }
    *(_DWORD *)(*(_DWORD *)(v2 + 24) + 28) = v7;
    memset(v7, 0, 0x38u);
    JUMPOUT(0x173104);
  }
  return result;
}
