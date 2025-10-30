int __fastcall sub_EC27C(char *a1, _DWORD *a2, char *a3)
{
  size_t **v6; // r4
  size_t *v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r5

  v6 = (size_t **)sub_EBA18();
  if ( v6
    && (!a1 || (v7 = (size_t *)sub_B220C(), (*v6 = v7) != 0) && sub_AE088(v7, a1, -1))
    && (!a2 || (v8 = sub_B20A4(), (v6[1] = (size_t *)v8) != 0) && sub_126EFC(v8, *a2))
    && (!a3 || (v9 = sub_B22C0(), (v6[2] = (size_t *)v9) != 0) && sub_1260CC(v9, a3)) )
  {
    v10 = sub_11B8E8(367, 0, v6);
    sub_EBA2C((int)v6);
    return v10;
  }
  else
  {
    sub_EBA2C((int)v6);
    return 0;
  }
}
