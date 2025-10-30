int __fastcall sub_1CD6BC(int *a1, int *a2)
{
  int v3; // r1
  int v4; // r2
  int v6; // [sp+4h] [bp-10h]
  int v7; // [sp+8h] [bp-Ch]
  int v8; // [sp+Ch] [bp-8h]

  v6 = *a1;
  v7 = a1[1];
  v8 = a1[2];
  v3 = a2[1];
  v4 = a2[2];
  *a1 = *a2;
  a1[1] = v3;
  a1[2] = v4;
  *a2 = v6;
  a2[1] = v7;
  a2[2] = v8;
  return v6;
}
