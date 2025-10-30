int __fastcall sub_31983C(unsigned int a1, int a2, unsigned int *a3)
{
  unsigned int v3; // r3
  bool v5; // cc
  int v6; // r7
  int v7; // r3
  int v10; // r1
  int v11; // r2
  void (__fastcall *v12)(unsigned int, int, int); // r3
  int result; // r0
  int v14; // r1
  int v15; // r2
  int (__fastcall *v16)(unsigned int, int, int); // r3
  int v17; // r2

  v3 = *a3;
  v5 = *a3 > 0x30;
  if ( *a3 != 48 )
    v5 = v3 > 1;
  v6 = !v5;
  if ( !v5 || v3 == 6 )
    return sub_314740(a1, a2, (int)a3);
  v7 = *(_DWORD *)(a1 + 256);
  if ( v7 == 255 )
  {
    v11 = *(_DWORD *)(a1 + 268);
    v12 = *(void (__fastcall **)(unsigned int, int, int))(a1 + 264);
    *(_BYTE *)(a1 + 255) = v6;
    v12(a1, 255, v11);
    v10 = 1;
    v7 = v6;
    ++*(_DWORD *)(a1 + 296);
  }
  else
  {
    v10 = v7 + 1;
  }
  *(_DWORD *)(a1 + 256) = v10;
  *(_BYTE *)(a1 + v7) = 40;
  *(_BYTE *)(a1 + 260) = 40;
  result = sub_314740(a1, a2, (int)a3);
  v14 = *(_DWORD *)(a1 + 256);
  if ( v14 == 255 )
  {
    v16 = *(int (__fastcall **)(unsigned int, int, int))(a1 + 264);
    v17 = *(_DWORD *)(a1 + 268);
    *(_BYTE *)(a1 + 255) = 0;
    result = v16(a1, 255, v17);
    v15 = 1;
    v14 = 0;
    ++*(_DWORD *)(a1 + 296);
  }
  else
  {
    v15 = v14 + 1;
  }
  *(_DWORD *)(a1 + 256) = v15;
  *(_BYTE *)(a1 + v14) = 41;
  *(_BYTE *)(a1 + 260) = 41;
  return result;
}
