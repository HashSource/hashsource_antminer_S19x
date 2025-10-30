int __fastcall sub_15C164(int a1, int a2, int a3, _DWORD *a4)
{
  int *v8; // r7
  int v9; // r0
  int v10; // r8
  int result; // r0
  int v12; // r4
  int *v13; // r0
  int v14; // r4

  v8 = (int *)sub_B66C8(a1);
  v9 = sub_B7170(a1);
  if ( a2 == 111 )
  {
    result = sub_D1520(v8, a4, 0);
    v14 = result;
    if ( result > 0 )
    {
      sub_B66CC(a1, 1);
      return v14;
    }
  }
  else
  {
    v10 = v9;
    if ( a2 > 111 )
    {
      switch ( a2 )
      {
        case 120:
          *a4 = v8;
          sub_B66CC(a1, 1);
          return 1;
        case 148:
          if ( sub_B66D0(a1) )
          {
            sub_B66C4(a1, (int)a4);
            return 1;
          }
          break;
        case 112:
          if ( sub_B66D0(a1) )
          {
            *a4 = *v8;
            return 1;
          }
          break;
        default:
          return sub_B6ECC(v10, a2, a3, (int)a4);
      }
      return 0;
    }
    switch ( a2 )
    {
      case 12:
        v13 = (int *)sub_B66C8((int)a4);
        if ( !sub_D17B4(v13, v8) )
          return 0;
        sub_B66CC(a1, 1);
        return 1;
      case 101:
        sub_B66FC(a1, 15);
        v12 = sub_B6ECC(v10, 101, a3, (int)a4);
        sub_B724C(a1);
        return v12;
      case 1:
        if ( !sub_B66D0(a1) )
          return 0;
        result = sub_D1520(v8, (_DWORD *)*v8, 0);
        if ( result > 0 )
          return sub_B6ECC(v10, a2, a3, (int)a4);
        break;
      default:
        return sub_B6ECC(v10, a2, a3, (int)a4);
    }
  }
  return result;
}
