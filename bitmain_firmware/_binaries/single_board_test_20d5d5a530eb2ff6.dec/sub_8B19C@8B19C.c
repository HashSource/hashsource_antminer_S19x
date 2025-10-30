int __fastcall sub_8B19C(int *a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r3
  int v7; // r0

  v4 = sub_8B024(a1);
  v5 = sub_D14F4(v4);
  v6 = v5;
  *a1 = v5;
  if ( !v5 || a2 && (v7 = sub_D1520(v5, a2, 0), v6 = *a1, v7 <= 0) )
  {
    sub_D1504(v6);
    v6 = 0;
    *a1 = 0;
  }
  return v6;
}
