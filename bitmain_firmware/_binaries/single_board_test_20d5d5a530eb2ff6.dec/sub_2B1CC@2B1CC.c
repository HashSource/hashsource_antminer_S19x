int __fastcall sub_2B1CC(int result)
{
  int v1; // r4
  char v2[56]; // [sp-38h] [bp-38h] BYREF

  if ( result != 1 && result != 2 )
  {
    if ( (unsigned int)(result - 3) <= 1 )
    {
      return 4;
    }
    else if ( (unsigned int)(result - 5) > 3 )
    {
      if ( (unsigned int)(result - 9) > 7 )
      {
        if ( (unsigned int)(result - 17) > 0xF )
        {
          if ( (unsigned int)(result - 33) > 0x1F )
          {
            if ( (unsigned int)(result - 65) > 0x3F )
            {
              if ( (unsigned int)(result - 129) > 0x7F )
              {
                if ( (unsigned int)(result - 257) > 0xFF )
                {
                  if ( (unsigned int)(result - 513) >= 0x200 )
                  {
                    v1 = result;
                    sub_1E938(v2, 0x30u);
                    printf("%s ", v2);
                    printf("%s : actual_core_number = %d, bigger than 1024\n", "calculate_core_number", v1);
                    snprintf(&byte_6119D4[256], 0x100u, "actual_core_number = %d, bigger than 1024", v1);
                    sub_3CC5C(&byte_6119D4[256], v2);
                    return 0;
                  }
                  else
                  {
                    return 1024;
                  }
                }
                else
                {
                  return 512;
                }
              }
              else
              {
                return 256;
              }
            }
            else
            {
              return 128;
            }
          }
          else
          {
            return 64;
          }
        }
        else
        {
          return 32;
        }
      }
      else
      {
        return 16;
      }
    }
    else
    {
      return 8;
    }
  }
  return result;
}
