int __fastcall sub_92EB4(int *a1, int a2)
{
  int *v4; // r5
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int result; // r0

  v4 = (int *)dword_475210;
  v5 = *(_DWORD *)(dword_475210 + 400);
  v6 = *(_DWORD *)(dword_475210 + 404);
  v7 = *(_DWORD *)(dword_475210 + 408);
  dword_475210 = *(_DWORD *)(dword_475210 + 416);
  *a1 = v5;
  a1[1] = v6;
  a1[2] = v7;
  sub_92698(v4[103]);
  free(v4);
  if ( *a1 >= 0 )
    return 0;
  result = (a2 >> -(char)*a1) & 1;
  if ( !result )
    sub_92E70(*a1, a1[1], a1[2]);
  return result;
}
