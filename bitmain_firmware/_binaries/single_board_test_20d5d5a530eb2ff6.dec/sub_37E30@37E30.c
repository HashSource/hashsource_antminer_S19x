int __fastcall sub_37E30(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int v2; // r3
  char v6; // lr
  char v7; // r3
  char v8; // [sp+14h] [bp-38h] BYREF
  unsigned __int8 v9; // [sp+15h] [bp-37h]
  char v10; // [sp+16h] [bp-36h]
  char v11[48]; // [sp+18h] [bp-34h] BYREF

  v2 = a1[80];
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( v2 == 70 )
  {
    v8 = a1[81];
    *a2 = strtol(&v8, 0, 10);
    if ( a1[82] == 86 )
    {
      v6 = a1[83];
      v9 = a1[84];
      v8 = v6;
      a2[1] = strtol(&v8, 0, 10);
      if ( a1[85] == 66 )
      {
        v7 = a1[86];
        v9 = 0;
        v8 = v7;
        a2[2] = strtol(&v8, 0, 10);
        if ( a1[87] == 67 )
        {
          v8 = a1[88];
          a2[3] = strtol(&v8, 0, 10);
          sub_1E938(v11, 0x30u);
          printf("%s ", v11);
          printf("%s : FT version: F%dV02%dB%dC%d\n", "get_chip_ft_program_version", *a2, a2[1], a2[2], a2[3]);
          snprintf(&byte_62A868[1024], 0x100u, "FT version: F%dV02%dB%dC%d", *a2, a2[1], a2[2], a2[3]);
          sub_3CC5C(&byte_62A868[1024], v11);
          return 1;
        }
        else
        {
          sub_1E938(v11, 0x30u);
          printf("%s ", v11);
          printf("%s : 4th FT version is not C, but is %c\n", "get_chip_ft_program_version", a1[87]);
          snprintf(&byte_62A868[1280], 0x100u, "4th FT version is not C, but is %c", a1[87]);
          sub_3CC5C(&byte_62A868[1280], v11);
          return 0;
        }
      }
      else
      {
        sub_1E938(v11, 0x30u);
        printf("%s ", v11);
        printf("%s : 3rd FT version is not B, but is %c\n", "get_chip_ft_program_version", a1[85]);
        snprintf(&byte_62A868[768], 0x100u, "3rd FT version is not B, but is %c", a1[85]);
        sub_3CC5C(&byte_62A868[768], v11);
        return 0;
      }
    }
    else
    {
      sub_1E938(v11, 0x30u);
      printf("%s ", v11);
      printf("%s : 2nd FT version is not V, but is %c\n", "get_chip_ft_program_version", a1[82]);
      snprintf(&byte_62A868[512], 0x100u, "2nd FT version is not V, but is %c", a1[82]);
      sub_3CC5C(&byte_62A868[512], v11);
      return 0;
    }
  }
  else
  {
    sub_1E938(v11, 0x30u);
    printf("%s ", v11);
    printf("%s : 1st FT version is not F, but is %c\n", "get_chip_ft_program_version", a1[80]);
    snprintf(&byte_62A868[256], 0x100u, "1st FT version is not F, but is %c", a1[80]);
    sub_3CC5C(&byte_62A868[256], v11);
    return 0;
  }
}
