int __fastcall sub_C0AD4(int a1, char a2)
{
  int v4; // r0
  int v5; // r3

  sub_C0878((char *)a1, 3);
  *(_BYTE *)(*(_DWORD *)a1 + *(_DWORD *)(a1 + 4)) = a2;
  *(_BYTE *)(*(_DWORD *)(a1 + 4) + *(_DWORD *)a1 + 1) = -1;
  *(_BYTE *)(*(_DWORD *)(a1 + 4) + *(_DWORD *)a1 + 2) = -1;
  v4 = *(_DWORD *)(a1 + 4);
  v5 = v4 + 3;
  *(_DWORD *)(a1 + 4) = v5;
  return v4 + 1;
}
