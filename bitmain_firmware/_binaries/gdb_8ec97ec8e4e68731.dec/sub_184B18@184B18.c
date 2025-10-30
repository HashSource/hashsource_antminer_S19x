int __fastcall sub_184B18(_DWORD *a1)
{
  int v1; // r12
  int result; // r0
  int v4; // r1
  int v5; // r2

  v1 = a1[7];
  result = dword_475848;
  v4 = dword_47584C;
  v5 = dword_475850;
  a1[3] = dword_475848;
  a1[4] = v4;
  a1[5] = v5;
  if ( v1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 4))(v1);
  a1[7] = 0;
  return result;
}
