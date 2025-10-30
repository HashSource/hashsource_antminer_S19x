int __fastcall sub_2A7FB0(int a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // r3
  int result; // r0
  int v7; // lr
  int v9; // r2
  int v10; // r12
  _DWORD *v11; // r9
  _DWORD *v12; // r8
  int v13; // r7

  v3 = (*(_DWORD *)(a1 + 40) >> 5) & 0xFFFFF;
  if ( ((*(_DWORD *)(a1 + 40) >> 5) & 0x4000) == 0 )
    sub_2A6BF0((int)"bfd.c", 2367, (int)"bfd_update_compression_header");
  result = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(result + 4) == 5 )
  {
    v7 = a3[35];
    v9 = *(_DWORD *)(v7 + 8);
    if ( (v3 & 0x20000) != 0 )
    {
      v10 = *(_DWORD *)(result + 444);
      *(_DWORD *)(v7 + 8) = v9 | 0x800;
      v11 = a2 + 1;
      v12 = a2 + 2;
      v13 = *(unsigned __int8 *)(*(_DWORD *)(v10 + 392) + 12);
      (*(void (__fastcall **)(int))(result + 48))(1);
      if ( v13 == 1 )
      {
        (*(void (__fastcall **)(_DWORD, _DWORD *))(*(_DWORD *)(a1 + 4) + 48))(a3[9], v11);
        return (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)(a1 + 4) + 48))(1 << a3[16], v12);
      }
      else
      {
        (*(void (__fastcall **)(_DWORD, _DWORD *))(*(_DWORD *)(a1 + 4) + 48))(0, v11);
        (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD *))(*(_DWORD *)(a1 + 4) + 36))(a3[9], 0, v12);
        return (*(int (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)(a1 + 4) + 36))(
                 1 << a3[16],
                 1 << a3[16] >> 31,
                 a2 + 4);
      }
    }
    else
    {
      *(_DWORD *)(v7 + 8) = v9 & 0xFFFFF7FF;
      *a2 = *(_DWORD *)"ZLIB";
      return sub_2AB784(a3[9], 0, a2 + 1);
    }
  }
  return result;
}
