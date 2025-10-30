int __fastcall sub_3D1EC(const char *a1, signed int a2, _DWORD *a3)
{
  signed int v3; // r3
  _DWORD *v4; // r9
  signed int v6; // r8
  int v7; // r4
  int result; // r0
  int v9; // r0
  int v10; // r5

  v3 = a2 + 1;
  v4 = a3;
  if ( a2 == -1 )
    v6 = strlen(a1);
  else
    v6 = a2;
  if ( v6 <= 0 )
    return 1;
  v7 = 0;
  while ( 1 )
  {
    v9 = sub_7B044((unsigned __int8)a1[v7], a2, a3, v3);
    v10 = v9;
    if ( !v9 )
    {
LABEL_13:
      *v4 = -1;
      return 0;
    }
    v3 = v9 + v7;
    a2 = v9;
    a3 = 0;
    if ( v9 > 1 )
      break;
LABEL_11:
    if ( v6 <= ++v7 )
      return 1;
  }
  if ( v6 < v3 )
    goto LABEL_13;
  result = sub_7B08C(&a1[v7], v9, 0);
  if ( result )
  {
    v7 += v10 - 1;
    goto LABEL_11;
  }
  *v4 = v7;
  return result;
}
