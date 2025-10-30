_DWORD *__fastcall sub_E71A4(unsigned int a1, int a2, int a3)
{
  int v5; // r8
  _DWORD *v6; // r5
  char *v7; // r3
  char *v8; // r11
  bool v9; // zf
  int v10; // r3
  int v11; // r10
  unsigned int **v12; // r6
  _DWORD *v13; // r3
  void *v14; // r0
  char *v15; // r2
  int v16; // t1
  char *v19; // [sp+14h] [bp-18h]
  void *ptr; // [sp+1Ch] [bp-10h] BYREF
  char *v21; // [sp+20h] [bp-Ch]
  char *i; // [sp+24h] [bp-8h]

  v5 = *(_DWORD *)dword_4788DC;
  if ( dword_478974 > 0 )
  {
    --dword_478974;
    sub_E4918(
      *(_DWORD *)(dword_478978 + 32 * dword_478974 + 12),
      &dword_4788E8,
      *(char **)(dword_478978 + 32 * dword_478974 + 8),
      0,
      *(_DWORD *)(dword_478978 + 32 * dword_478974 + 20),
      a1,
      0,
      0);
    if ( dword_478974 > 0 )
    {
      if ( dword_47AC88 > 0 )
        sub_F43B4(&off_46D334, "Context stack not empty in end_symtab");
      dword_478974 = 0;
    }
  }
  if ( (*(_DWORD *)(v5 + 12) & 1) != 0 )
  {
    v6 = (_DWORD *)dword_478934;
    if ( dword_478934 )
    {
      v7 = 0;
      ptr = 0;
      v8 = 0;
      v21 = 0;
      for ( i = 0; ; v7 = i )
      {
        if ( v8 == v7 )
        {
          sub_E74C4(&ptr, v8, v6 + 1);
          v8 = v21;
        }
        else
        {
          v9 = v8 == 0;
          v8 += 4;
          if ( !v9 )
            *((_DWORD *)v8 - 1) = v6[1];
          v21 = v8;
        }
        v6 = (_DWORD *)*v6;
        if ( !v6 )
          break;
      }
      v19 = (char *)ptr;
      v10 = v8 - (_BYTE *)ptr;
      if ( v8 - (_BYTE *)ptr > 2147483644 )
      {
        v11 = 0x1FFFFFFF;
LABEL_16:
        while ( 1 )
        {
          v12 = (unsigned int **)sub_98444(4 * v11);
          if ( v12 )
            break;
          v11 >>= 1;
          if ( !v11 )
            goto LABEL_32;
        }
        sub_E70EC(v19, v8, v12, v11, 0);
      }
      else
      {
        if ( v10 > 0 )
        {
          v11 = v10 >> 2;
          goto LABEL_16;
        }
LABEL_32:
        v12 = 0;
        sub_E6C0C(v19, v8, 0);
      }
      sub_338F88(v12);
      v13 = (_DWORD *)dword_478934;
      v14 = ptr;
      if ( dword_478934 )
      {
        v15 = (char *)ptr - 4;
        do
        {
          v16 = *((_DWORD *)v15 + 1);
          v15 += 4;
          v13[1] = v16;
          v13 = (_DWORD *)*v13;
        }
        while ( v13 );
      }
      if ( v14 )
        sub_339E64(v14);
    }
  }
  sub_20BC20(v5);
  ((void (__fastcall *)(int))loc_20C1C4)(v5);
  if ( a3 || dword_478934 || dword_4788F0 || dword_4788F4 || dword_478970 || dword_4788FC || dword_4788F8 )
    return sub_E4918(0, &dword_4788F0, 0, 0, dword_478964, a1, 0, a2);
  else
    return 0;
}
