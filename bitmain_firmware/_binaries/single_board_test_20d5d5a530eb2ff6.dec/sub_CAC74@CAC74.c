int __fastcall sub_CAC74(int a1, int *a2, int a3, int a4, int a5, int a6)
{
  int v9; // r7
  int v10; // r0
  _BOOL4 v11; // r4
  int result; // r0
  int v13; // [sp+4h] [bp-4h]

  if ( !*(_DWORD *)(*(_DWORD *)a1 + 156) )
  {
    if ( a3 && !sub_B89E4(a3, a2[2]) || a4 && !sub_B89E4(a4, a2[3]) )
    {
      v11 = 0;
      v9 = 0;
    }
    else
    {
      v11 = 1;
      v9 = a5;
      if ( a5 )
      {
        v9 = 0;
        v11 = sub_B89E4(a5, a2[4]) != 0;
      }
    }
    goto LABEL_6;
  }
  v9 = 0;
  if ( a6 )
  {
LABEL_3:
    if ( a3 && (v10 = (*(int (__fastcall **)(int, int, int, int))(*(_DWORD *)a1 + 156))(a1, a3, a2[2], a6)) == 0
      || a4 && (v10 = (*(int (__fastcall **)(int, int, int, int))(*(_DWORD *)a1 + 156))(a1, a4, a2[3], a6)) == 0 )
    {
      v11 = v10;
    }
    else if ( a5 )
    {
      v11 = (*(int (__fastcall **)(int, int, int, int))(*(_DWORD *)a1 + 156))(a1, a5, a2[4], a6) != 0;
    }
    else
    {
      v11 = 1;
    }
LABEL_6:
    sub_130B5C(v9);
    return v11;
  }
  v13 = a3;
  result = sub_130B08(a1);
  a6 = result;
  if ( result )
  {
    v9 = result;
    a3 = v13;
    goto LABEL_3;
  }
  return result;
}
