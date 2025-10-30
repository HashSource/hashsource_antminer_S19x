int __fastcall sub_53960(int a1, int a2)
{
  int v3; // r8
  int v4; // r7
  int v5; // r0
  int v6; // r4
  void *v7; // r9
  char v9[20]; // [sp+0h] [bp-1Ch] BYREF

  sub_6C054(v9, 20, "/dev/wwv%d", a1);
  v3 = sub_3A298(v9, 0xDu, 1);
  if ( v3 <= 0 )
    return 0;
  v5 = sub_63BA4(0, 8, 0, 1);
  v6 = *(_DWORD *)(a2 + 84);
  v7 = (void *)v5;
  *(_DWORD *)(v6 + 20) = a2;
  *(_DWORD *)(v6 + 28) = v3;
  *(_DWORD *)(v6 + 12) = sub_53A84;
  *(_DWORD *)(v6 + 24) = 0;
  v4 = sub_18DF0((int *)(v6 + 8));
  if ( v4 )
  {
    v4 = 1;
    *(_DWORD *)v6 = v7;
    *(_BYTE *)(a2 + 95) = -10;
    *(_DWORD *)(v6 + 44) = "PSTI/Traconex WWV/WWVH Receiver";
    strcpy((char *)(v6 + 764), "WWV");
  }
  else
  {
    close(v3);
    *(_DWORD *)(v6 + 28) = -1;
    free(v7);
  }
  return v4;
}
