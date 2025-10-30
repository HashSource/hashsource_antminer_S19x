int __fastcall sub_72A10(int a1, int a2)
{
  int v3; // r3
  unsigned int v7; // [sp+14h] [bp-10h]
  int v8; // [sp+18h] [bp-Ch]
  int v9; // [sp+18h] [bp-Ch]
  unsigned int i; // [sp+1Ch] [bp-8h]

  if ( *(_DWORD *)(a1 + 20) )
    return *(_DWORD *)(a1 + 20);
  if ( !*(_BYTE *)(a1 + *(_DWORD *)(a1 + 16) + 8) )
  {
    v8 = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
    if ( v8 == -1 )
    {
      *(_DWORD *)(a1 + 20) = -1;
      return -1;
    }
    *(_BYTE *)(a1 + 8) = v8;
    *(_DWORD *)(a1 + 16) = 0;
    if ( v8 <= 127 || v8 > 255 )
    {
      *(_BYTE *)(a1 + 9) = 0;
    }
    else
    {
      v7 = sub_758F8((unsigned __int8)v8);
      if ( !v7 )
        goto LABEL_22;
      if ( v7 <= 1 )
        _assert_fail("count >= 2", "load.c", 0xBDu, "stream_get");
      for ( i = 1; i < v7; *(_BYTE *)(a1 + i++ + 8) = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4)) )
        ;
      if ( !sub_759E4(a1 + 8, v7, 0) )
      {
LABEL_22:
        *(_DWORD *)(a1 + 20) = -2;
        sub_727DC(a2, (_DWORD *)a1, 5, "unable to decode byte 0x%x", v8);
        return -2;
      }
      *(_BYTE *)(a1 + v7 + 8) = 0;
    }
  }
  v3 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 16) = v3 + 1;
  v9 = *(unsigned __int8 *)(a1 + v3 + 8);
  ++*(_DWORD *)(a1 + 36);
  if ( v9 == 10 )
  {
    ++*(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(a1 + 28) = 0;
  }
  else if ( sub_758F8((unsigned __int8)v9) )
  {
    ++*(_DWORD *)(a1 + 28);
  }
  return v9;
}
