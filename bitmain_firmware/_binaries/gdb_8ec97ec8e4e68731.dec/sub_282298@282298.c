int __fastcall sub_282298(int a1, int *a2)
{
  int *v3; // r5
  int v4; // r0
  int v5; // r3

  v3 = (int *)dword_48ABAC;
  dword_48AAA0 |= 0x40u;
  v4 = sub_29334C(a1);
  v5 = dword_48AAA0;
  v3[8] = v4;
  dword_48AAA0 = v5 & 0xFFFFFFBF;
  *a2 = v4;
  if ( v3[8] >= 0 )
    return sub_280D40(v3);
  v3[8] = 0;
  return -1;
}
