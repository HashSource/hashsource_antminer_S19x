int __fastcall sub_79F54(int a1, int a2)
{
  int v2; // r3
  int v5; // r2
  int v6; // r3
  int v7; // r0
  int v8; // r2
  int v9; // r5
  int v10; // r2
  int v12; // r2
  int v13; // r3
  int v14; // r3
  unsigned int v15; // r0
  unsigned int v16; // r8
  int v17; // r6
  unsigned int v18; // r9
  int v19; // r3
  int v20; // r2
  int v21; // [sp+0h] [bp-Ch]

  v2 = *(_DWORD *)(a1 + 16);
  v5 = a1 + v2;
  v6 = v2 + 1;
  v7 = *(unsigned __int8 *)(v5 + 8);
  if ( !*(_BYTE *)(v5 + 8) )
  {
    v7 = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
    v9 = v7;
    if ( v7 == -1 )
    {
      *(_DWORD *)(a1 + 20) = -1;
      return v9;
    }
    v14 = v7 - 128;
    v7 = (unsigned __int8)v7;
    *(_BYTE *)(a1 + 8) = v7;
    *(_DWORD *)(a1 + 16) = 0;
    if ( (unsigned int)(v9 - 128) <= 0x7F )
    {
      v15 = sub_7B044((unsigned __int8)v7, a2, 0, v14);
      v16 = v15;
      if ( !v15 )
        goto LABEL_18;
      if ( v15 <= 1 )
        _assert_fail("count >= 2", "load.c", 0xAFu, "stream_get");
      v17 = a1;
      v18 = a1 - 1 + v15;
      do
      {
        *(_BYTE *)(v17 + 9) = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
        ++v17;
      }
      while ( v17 != v18 );
      if ( !sub_7B08C(a1 + 8, v16, 0) )
      {
LABEL_18:
        v21 = v9;
        v9 = -2;
        *(_DWORD *)(a1 + 20) = -2;
        sub_79D74(a2, (_DWORD *)a1, 5, "unable to decode byte 0x%x", v21);
        return v9;
      }
      v19 = *(_DWORD *)(a1 + 16);
      *(_BYTE *)(v16 + a1 + 8) = 0;
      v20 = a1 + v19;
      v6 = v19 + 1;
      v7 = *(unsigned __int8 *)(v20 + 8);
    }
    else
    {
      v6 = 1;
      *(_BYTE *)(a1 + 9) = 0;
    }
  }
  v8 = *(_DWORD *)(a1 + 36);
  v9 = v7;
  *(_DWORD *)(a1 + 16) = v6;
  v10 = v8 + 1;
  *(_DWORD *)(a1 + 36) = v10;
  if ( v7 == 10 )
  {
    v12 = *(_DWORD *)(a1 + 24);
    v13 = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(a1 + 28) = 0;
    *(_DWORD *)(a1 + 24) = v12 + 1;
    *(_DWORD *)(a1 + 32) = v13;
  }
  else if ( sub_7B044(v7, a2, v10, v6) )
  {
    ++*(_DWORD *)(a1 + 28);
  }
  return v9;
}
