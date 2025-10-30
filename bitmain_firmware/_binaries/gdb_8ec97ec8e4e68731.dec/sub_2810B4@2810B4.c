int __fastcall sub_2810B4(int a1, int *a2, int *a3)
{
  int v3; // r12
  int v4; // r5
  bool v5; // zf
  int *v6; // r3
  int v7; // r0
  int result; // r0

  v4 = a1;
  v5 = dword_48AB0C == 0;
  LOWORD(v6) = (unsigned __int16)&dword_46DF04;
  if ( dword_48AB0C )
  {
    HIWORD(v6) = 70;
  }
  else
  {
    HIWORD(v6) = (unsigned int)&dword_46DF04 >> 16;
    LOWORD(a3) = -8480;
    a1 = v6[2];
  }
  if ( !dword_48AB0C )
  {
    HIWORD(a3) = 70;
    v3 = v6[1];
    a2 = &dword_46DEDC;
    *a3 = a1;
  }
  v7 = *v6;
  if ( v5 )
    *a2 = v3;
  dword_48AB98 = 1;
  switch ( v7 )
  {
    case 'i':
      if ( !dword_48AB10[0] || !*(_BYTE *)dword_48AB10[0] )
        goto LABEL_13;
      break;
    case 'I':
      if ( !dword_48AB10[0] || !*(_BYTE *)dword_48AB10[0] )
        goto LABEL_13;
      sub_2954D0(1, 73);
      break;
    case 'a':
      if ( !dword_48AB10[0] || !*(_BYTE *)dword_48AB10[0] )
      {
LABEL_13:
        result = sub_27F874(v7, (int *)off_46DED0);
        goto LABEL_14;
      }
      sub_28048C();
      break;
    default:
      if ( v7 != 65 || !dword_48AB10[0] || !*(_BYTE *)dword_48AB10[0] )
        goto LABEL_13;
      sub_2954E8(1, 65);
      break;
  }
  sub_28024C(v4);
  if ( dword_4900D8 > 0 )
    sub_28052C();
  result = 0;
LABEL_14:
  dword_48AB98 = 0;
  return result;
}
