int __fastcall sub_12AB8(int a1, int a2)
{
  int v2; // r3
  int v5; // r2
  int v6; // r3
  int v7; // r0
  int v8; // r2
  int v9; // r5
  int v11; // r2
  int v12; // r3
  unsigned int v13; // r0
  unsigned int v14; // r8
  int v15; // r6
  unsigned int v16; // r9
  int v17; // r3
  int v18; // r2
  int v19; // [sp+0h] [bp-Ch]

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
    v7 = (unsigned __int8)v7;
    *(_BYTE *)(a1 + 8) = v7;
    *(_DWORD *)(a1 + 16) = 0;
    if ( (unsigned int)(v9 - 128) <= 0x7F )
    {
      v13 = sub_13BAC((unsigned __int8)v7);
      v14 = v13;
      if ( !v13 )
        goto LABEL_18;
      if ( v13 <= 1 )
        _assert_fail("count >= 2", "load.c", 0xAFu, "stream_get");
      v15 = a1;
      v16 = a1 - 1 + v13;
      do
      {
        *(_BYTE *)(v15 + 9) = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
        ++v15;
      }
      while ( v15 != v16 );
      if ( !sub_13BF4(a1 + 8, v14, 0) )
      {
LABEL_18:
        v19 = v9;
        v9 = -2;
        *(_DWORD *)(a1 + 20) = -2;
        sub_128D8(a2, (_DWORD *)a1, 5, "unable to decode byte 0x%x", v19);
        return v9;
      }
      v17 = *(_DWORD *)(a1 + 16);
      *(_BYTE *)(v14 + a1 + 8) = 0;
      v18 = a1 + v17;
      v6 = v17 + 1;
      v7 = *(unsigned __int8 *)(v18 + 8);
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
  *(_DWORD *)(a1 + 36) = v8 + 1;
  if ( v7 == 10 )
  {
    v11 = *(_DWORD *)(a1 + 24);
    v12 = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(a1 + 28) = 0;
    *(_DWORD *)(a1 + 24) = v11 + 1;
    *(_DWORD *)(a1 + 32) = v12;
  }
  else if ( sub_13BAC(v7) )
  {
    ++*(_DWORD *)(a1 + 28);
  }
  return v9;
}
