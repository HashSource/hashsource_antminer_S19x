int __fastcall sub_46284(int a1, int a2)
{
  int v2; // r2
  int v4; // r3
  int v5; // r6
  int v6; // r1
  int v8; // r0
  int v9; // r5
  int v11; // r3
  int v12; // r2
  unsigned int v13; // r0
  unsigned int v14; // r8
  _BYTE *v15; // r6
  _BYTE *v16; // r9
  int v17; // r2
  char arg[4]; // [sp+0h] [bp-8h]

  v2 = *(_DWORD *)(a1 + 16);
  v4 = a1 + v2;
  v5 = *(unsigned __int8 *)(a1 + v2 + 8);
  if ( *(_BYTE *)(a1 + v2 + 8) )
  {
    v6 = v2 + 1;
    goto LABEL_8;
  }
  v8 = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
  v9 = v8;
  if ( v8 == -1 )
  {
    *(_DWORD *)(a1 + 20) = -1;
    return v9;
  }
  *(_DWORD *)(a1 + 16) = v5;
  *(_BYTE *)(a1 + 8) = v8;
  if ( (unsigned int)(v8 - 128) <= 0x7F )
  {
    v13 = sub_47CE4((unsigned __int8)v8);
    v14 = v13;
    if ( !v13 )
      goto LABEL_20;
    if ( v13 <= 1 )
      _assert_fail("count >= 2", "load.c", 0xBDu, "stream_get");
    v15 = (_BYTE *)(a1 + 9);
    v16 = (_BYTE *)(a1 + 8 + v13);
    do
      *v15++ = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
    while ( v16 != v15 );
    if ( !sub_47D50(a1 + 8, v14, 0) )
    {
LABEL_20:
      *(_DWORD *)arg = v9;
      v9 = -2;
      *(_DWORD *)(a1 + 20) = -2;
      sub_45F98(a2, (_DWORD *)a1, 5, "unable to decode byte 0x%x", *(_DWORD *)arg);
      return v9;
    }
    *(_BYTE *)(a1 + v14 + 8) = 0;
    v17 = *(_DWORD *)(a1 + 16);
    v6 = v17 + 1;
    v4 = a1 + v17;
  }
  else
  {
    v6 = 1;
    v4 = a1;
    *(_BYTE *)(a1 + 9) = v5;
  }
LABEL_8:
  *(_DWORD *)(a1 + 16) = v6;
  v9 = *(unsigned __int8 *)(v4 + 8);
  ++*(_DWORD *)(a1 + 36);
  if ( v9 != 10 )
  {
    if ( sub_47CE4(v9) )
      ++*(_DWORD *)(a1 + 28);
    return v9;
  }
  v11 = *(_DWORD *)(a1 + 24);
  v12 = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 24) = v11 + 1;
  *(_DWORD *)(a1 + 32) = v12;
  return 10;
}
