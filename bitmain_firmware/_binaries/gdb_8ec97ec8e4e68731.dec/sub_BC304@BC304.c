int __fastcall sub_BC304(int a1, int a2, _DWORD *a3)
{
  __int64 v6; // r0
  int v8; // [sp+Ch] [bp-Ch]
  int v9; // [sp+10h] [bp-8h]

  v6 = *(_QWORD *)sub_BBFD8(a1);
  if ( v6 >= 1 )
  {
    while ( 1 )
    {
      LODWORD(v6) = sub_BC298(a1);
      if ( !(_DWORD)v6 )
        break;
      if ( (_DWORD)v6 != 1 )
      {
        LODWORD(v6) = -1;
        return v6;
      }
      if ( v8 == a2 )
      {
        *a3 = v9;
        return v6;
      }
    }
  }
  return v6;
}
