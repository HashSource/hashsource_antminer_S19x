int __fastcall sub_1BC38(int a1, _DWORD *a2)
{
  int v3; // r1
  int v4; // r2
  int v5; // r1

  if ( !a2 || a2[2] || a2[3] != -1 || a1 == -1 )
    return -1;
  v3 = a2[1];
  v4 = (unsigned __int8)a1;
  a2[3] = (unsigned __int8)a1;
  if ( v3 )
    conf_file_sum -= (unsigned __int8)a1;
  if ( (unsigned __int8)a1 == 10 )
  {
    v5 = a2[7];
    a2[4] = a2[6];
    a2[5] = v5;
    a2[7] = -1;
  }
  --a2[5];
  return v4;
}
