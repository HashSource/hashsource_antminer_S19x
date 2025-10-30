int __fastcall sub_16D6B0(int *a1)
{
  int (*v2)(void); // r3
  int v3; // r4
  bool v4; // cc
  unsigned int v5; // r1
  int v6; // r3
  int (__fastcall *v7)(int *, int); // r6
  int v8; // r0
  const char *v9; // r6
  void (__fastcall *v10)(int *); // r3
  int v11; // r4
  int (__fastcall *v13)(int *, unsigned int); // r3
  int v14; // r0
  signed int i; // r4
  int (__fastcall *v16)(int *, int); // r6
  int v17; // r0
  int v18; // r0
  int (__fastcall *v19)(int *); // r3

  v2 = *(int (**)(void))(*a1 + 4);
  if ( v2 && v2() <= 0 )
  {
    v9 = "opening session";
LABEL_11:
    v10 = *(void (__fastcall **)(int *))(*a1 + 20);
    if ( v10 )
      v10(a1);
LABEL_13:
    v11 = -1;
    sub_D0048(40, 113, 107, (int)"crypto/ui/ui_lib.c", 545);
    sub_D1240(2, "while ", v9);
    return v11;
  }
  if ( (a1[4] & 0x100) != 0 )
    sub_D13A4((int (__fastcall *)(char *, size_t, int))sub_16C6F8, (int)a1);
  v3 = 0;
  while ( 1 )
  {
    v4 = v3 < sub_10C010(a1[1]);
    v5 = v3;
    v6 = *a1;
    ++v3;
    if ( !v4 )
      break;
    v7 = *(int (__fastcall **)(int *, int))(v6 + 8);
    if ( v7 )
    {
      v8 = sub_10C01C((_DWORD *)a1[1], v5);
      if ( v7(a1, v8) <= 0 )
      {
        v9 = "writing strings";
        goto LABEL_11;
      }
    }
  }
  v13 = *(int (__fastcall **)(int *, unsigned int))(v6 + 12);
  if ( v13 )
  {
    v14 = v13(a1, v5);
    if ( v14 == -1 )
    {
      v11 = -2;
      v9 = "processing";
      a1[4] &= ~1u;
      goto LABEL_28;
    }
    if ( !v14 )
    {
      v9 = "flushing";
      goto LABEL_11;
    }
  }
  for ( i = 0; i < sub_10C010(a1[1]); ++i )
  {
    v16 = *(int (__fastcall **)(int *, int))(*a1 + 16);
    if ( v16 )
    {
      v17 = sub_10C01C((_DWORD *)a1[1], i);
      v18 = v16(a1, v17);
      if ( v18 == -1 )
      {
        v11 = -2;
        v9 = "processing";
        a1[4] &= ~1u;
        goto LABEL_28;
      }
      if ( !v18 )
      {
        v9 = "reading strings";
        goto LABEL_11;
      }
    }
  }
  v9 = 0;
  v11 = 0;
LABEL_28:
  v19 = *(int (__fastcall **)(int *))(*a1 + 20);
  if ( v19 && v19(a1) <= 0 )
  {
    if ( !v9 )
      v9 = "closing session";
    goto LABEL_13;
  }
  return v11;
}
