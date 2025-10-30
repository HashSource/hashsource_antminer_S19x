int __fastcall sub_99AEC(int result)
{
  if ( result
    && result != 2
    && result != 4
    && result != 6
    && result != 8
    && result != 11
    && result != 15
    && result != 1
    && result != 3 )
  {
    if ( result == 5 )
    {
      return 5;
    }
    else if ( result != 9 )
    {
      if ( result == 7 )
      {
        return 10;
      }
      else if ( result == 31 )
      {
        return 12;
      }
      else if ( result != 13 && result != 14 )
      {
        switch ( result )
        {
          case 10:
            return 30;
          case 12:
            return 31;
          case 17:
            return 20;
          case 30:
            return 32;
          case 28:
            return 28;
          case 23:
            return 16;
          case 29:
            return 23;
          case 19:
            return 17;
          case 20:
            return 18;
          case 18:
            return 19;
          default:
            if ( result != 21 && result != 22 && result != 26 && result != 27 )
            {
              if ( result == 24 )
              {
                return 24;
              }
              else if ( result != 25 )
              {
                if ( (unsigned int)(result - 32) > 0x20 )
                {
                  return 143;
                }
                else if ( (unsigned int)(result - 33) <= 0x1E )
                {
                  result += 12;
                }
                else if ( result == 32 )
                {
                  return 77;
                }
                else
                {
                  if ( (unsigned int)(result - 64) > 0x3F )
                    sub_946E0("GDB bug: target.c (gdb_signal_from_host): unrecognized real-time signal");
                  return 78;
                }
              }
            }
            break;
        }
      }
    }
  }
  return result;
}
