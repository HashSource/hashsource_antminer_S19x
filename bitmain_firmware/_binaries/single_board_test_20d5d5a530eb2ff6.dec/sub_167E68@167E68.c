int __fastcall sub_167E68(int a1, char a2, int a3, char a4)
{
  int v4; // r4
  int v5; // r5
  int v6; // r6
  int v7; // r7
  int v8; // r5
  int v9; // r5

  *(_DWORD *)(v6 + 84) = v5;
  *(_BYTE *)(v6 + 1) = a4;
  *(_BYTE *)(*(_DWORD *)(v4 + 84) + 13) = v7;
  *(_BYTE *)(v4 + 9) = a2;
  v8 = *(_DWORD *)(v4 + 100);
  *(_DWORD *)(v4 + 116) = v8;
  v9 = *(_DWORD *)(v8 + 116);
  *(_BYTE *)(*(_DWORD *)(v4 + 100) + 9) = *(_DWORD *)(v7 + 68);
  *(_DWORD *)(v9 + 68) = v7;
  return sub_167E80();
}
