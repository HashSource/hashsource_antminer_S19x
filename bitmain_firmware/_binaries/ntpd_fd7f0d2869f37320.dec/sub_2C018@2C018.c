int __fastcall sub_2C018(int a1, const char *a2)
{
  int result; // r0

  result = a1 - 1;
  switch ( result )
  {
    case 0:
      if ( dword_BA8F4 )
        free((void *)dword_BA8F4);
      result = sub_64C8C(a2);
      dword_BA8F4 = result;
      break;
    case 1:
      if ( dword_BA8FC )
        free((void *)dword_BA8FC);
      result = sub_64C8C(a2);
      dword_BA8FC = result;
      break;
    case 3:
      if ( dword_BA8F0 )
        free((void *)dword_BA8F0);
      result = sub_64C8C(a2);
      dword_BA8F0 = result;
      break;
    case 7:
      if ( dword_BA8F8 )
        free((void *)dword_BA8F8);
      result = sub_64C8C(a2);
      dword_BA8F8 = result;
      break;
    case 8:
      result = OBJ_sn2nid(a2);
      if ( result )
        crypto_nid = result;
      else
        result = sub_65D40(3, "crypto_config: invalid digest name %s", a2);
      break;
    default:
      return result;
  }
  return result;
}
