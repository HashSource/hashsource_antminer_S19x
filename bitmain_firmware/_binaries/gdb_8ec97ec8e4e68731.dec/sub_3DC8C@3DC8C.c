int __fastcall sub_3DC8C(int a1, const char *a2, _DWORD *a3, const char *a4)
{
  *(_DWORD *)(a1 + 12) = a1 + 20;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 20) = 0;
  if ( a4 )
    sub_3D6EC(a1, a2, a3, a4);
  else
    sub_3D5F0((_DWORD *)a1, (int)a2, (int)a3);
  return a1;
}
