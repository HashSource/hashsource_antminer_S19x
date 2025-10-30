int __fastcall sub_92B44(int result)
{
  _DWORD *v1; // r2
  __int64 v2; // r0

  v1 = (_DWORD *)dword_475210;
  switch ( *(_DWORD *)dword_475210 )
  {
    case 0:
      if ( result )
        goto LABEL_14;
      *(_DWORD *)dword_475210 = 1;
      result = 1;
      break;
    case 1:
      if ( result != 1 )
        goto LABEL_5;
      *(_DWORD *)dword_475210 = 2;
      break;
    case 2:
      goto LABEL_4;
    case 3:
      if ( !result )
        return result;
      result = sub_94700("common/common-exceptions.c", 174, "bad state");
LABEL_4:
      if ( result == 1 )
      {
        *v1 = 1;
        result = 0;
      }
      else
      {
LABEL_5:
        if ( result == 2 )
        {
          *v1 = 3;
          result = 1;
        }
        else
        {
          result = 0;
        }
      }
      break;
    default:
      sub_94700("common/common-exceptions.c", 177, "bad switch");
LABEL_14:
      v2 = sub_94700("common/common-exceptions.c", 129, "bad state");
      sub_92C20(v2, HIDWORD(v2));
  }
  return result;
}
