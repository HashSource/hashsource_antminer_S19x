unsigned int __fastcall sub_CEE8(unsigned int result)
{
  _DWORD *v1; // r3
  int v2; // r1

  if ( result )
  {
    v1 = *(_DWORD **)result;
    if ( *(_DWORD *)result )
    {
      result = 0;
      while ( 1 )
      {
        v2 = v1[4];
        if ( v2 == 376 )
          break;
        if ( v2 > 376 )
        {
          if ( v2 == 395 )
          {
            result |= 0x20u;
            goto LABEL_9;
          }
          if ( v2 >= 396 )
          {
            if ( v2 == 430 )
            {
              result |= 0x400u;
            }
            else
            {
              if ( v2 != 444 )
                goto LABEL_15;
              result |= 0x1000u;
            }
            goto LABEL_9;
          }
          if ( v2 != 394 )
LABEL_15:
            sub_C954((int)"peerflag_bits: option-token=%d", v2);
          v1 = (_DWORD *)*v1;
          result |= 2u;
          if ( !v1 )
            return result;
        }
        else
        {
          switch ( v2 )
          {
            case 274:
              result |= 0x40u;
              break;
            case 311:
              result |= 0x100u;
              break;
            case 264:
              result |= 0x800u;
              break;
            default:
              goto LABEL_15;
          }
LABEL_9:
          v1 = (_DWORD *)*v1;
          if ( !v1 )
            return result;
        }
      }
      result |= 0x200u;
      goto LABEL_9;
    }
    return 0;
  }
  return result;
}
