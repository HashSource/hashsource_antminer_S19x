void __fastcall sub_24F804(int *a1, int a2, int a3)
{
  int **v6; // r0
  int v7; // r3
  unsigned int v8; // [sp+14h] [bp-Ch] BYREF
  int v9[2]; // [sp+18h] [bp-8h] BYREF

  ((void (__fastcall *)(int, int, unsigned int *, int *))loc_166A80)(a1[11], a1[13], &v8, v9);
  v6 = (int **)sub_24A618(a1[4]);
  sub_24ED00(v6, (int)a1, v8, v7, v9[0], v9[1], a2, a3);
  sub_24F558((void ***)(a2 + 32));
  sub_24F558((void ***)(a3 + 32));
}
