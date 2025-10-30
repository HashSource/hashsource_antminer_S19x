int __fastcall sub_20914(int a1, const char *a2)
{
  const char *v2; // r5
  size_t v4; // r0
  size_t v5; // r0
  size_t v6; // r0
  size_t v7; // r0
  size_t v8; // r0
  int v9; // r6
  const char *v10; // r4
  size_t v11; // r0
  char v13[52]; // [sp+0h] [bp-34h] BYREF

  v2 = (const char *)(a1 + 1);
  v4 = strlen((const char *)(a1 + 1));
  if ( v4 == 17 )
  {
    v5 = strlen(a2 + 32);
    if ( v5 == 2 )
    {
      v6 = strlen(a2 + 48);
      if ( v6 > 0xD )
      {
        sub_6FBF4(v6);
        sub_1F650(0, (const char *)(dword_223680 + 32));
        sub_1F650(1, "chip marking");
        sub_1F650(2, "is not correct");
        sub_1E938(v13, 0x30u);
        printf("%s ", v13);
        printf("%s : chip marking isn't correct, chip marking: %s\n", "check_sn_qr_code_legality", a2 + 48);
        snprintf(byte_6008BC, 0x100u, "chip marking isn't correct, chip marking: %s", a2 + 48);
        sub_3CC5C(byte_6008BC, v13);
        return 0;
      }
      else
      {
        v7 = strlen(a2 + 64);
        if ( v7 == 4 )
        {
          v8 = strlen(a2 + 80) - 9;
          if ( v8 <= 1 )
          {
            v9 = dword_223680;
            if ( *(_BYTE *)(dword_223680 + 90) )
            {
              if ( !sub_20530(a2 + 104) )
                return 0;
              v9 = dword_223680;
              strcpy((char *)(dword_223680 + 124), a2 + 104);
            }
            if ( !*(_BYTE *)(v9 + 89) )
            {
LABEL_8:
              v10 = a2 + 120;
              v11 = strlen(v10);
              if ( v11 == 7 )
                return 1;
              sub_6FBF4(v11);
              sub_1F650(0, (const char *)(dword_223680 + 32));
              sub_1F650(1, "hashboard");
              sub_1F650(1, "ctrl code");
              sub_1F650(2, "is not correct");
              sub_1E938(v13, 0x30u);
              printf("%s ", v13);
              printf(
                "%s : hashboard ctrl code isn't correct, hashboard ctrl code: %s\n",
                "check_sn_qr_code_legality",
                v10);
              snprintf(byte_600BBC, 0x100u, "hashboard ctrl code isn't correct, hashboard ctrl code: %s", v10);
              sub_3CC5C(byte_600BBC, v13);
              return 0;
            }
            if ( sub_2064C(a2 + 104) )
            {
              strcpy((char *)(dword_223680 + 92), a2 + 104);
              goto LABEL_8;
            }
            return 0;
          }
          sub_6FBF4(v8);
          sub_1F650(0, (const char *)(dword_223680 + 32));
          sub_1F650(1, "ft version");
          sub_1F650(2, "is not correct");
          sub_1E938(v13, 0x30u);
          printf("%s ", v13);
          printf("%s : ft version isn't correct, ft version: %s\n", "check_sn_qr_code_legality", a2 + 80);
          snprintf(byte_600ABC, 0x100u, "ft version isn't correct, ft version: %s", a2 + 80);
          sub_3CC5C(byte_600ABC, v13);
          return 0;
        }
        else
        {
          sub_6FBF4(v7);
          sub_1F650(0, (const char *)(dword_223680 + 32));
          sub_1F650(1, "chip bin");
          sub_1F650(2, "is not correct");
          sub_1E938(v13, 0x30u);
          printf("%s ", v13);
          printf("%s : chip bin isn't correct, chip bin: %s\n", "check_sn_qr_code_legality", a2 + 64);
          snprintf(byte_6009BC, 0x100u, "chip bin isn't correct, chip bin: %s", a2 + 64);
          sub_3CC5C(byte_6009BC, v13);
          return 0;
        }
      }
    }
    else
    {
      sub_6FBF4(v5);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "chip die");
      sub_1F650(2, "is not correct");
      sub_1E938(v13, 0x30u);
      printf("%s ", v13);
      printf("%s : chip die isn't correct, chip die: %s\n", "check_sn_qr_code_legality", a2 + 32);
      snprintf(byte_6007BC, 0x100u, "chip die isn't correct, chip die: %s", a2 + 32);
      sub_3CC5C(byte_6007BC, v13);
      return 0;
    }
  }
  else
  {
    sub_6FBF4(v4);
    sub_1F650(0, (const char *)(dword_223680 + 32));
    sub_1F650(2, "SN isn't correct");
    sub_1E938(v13, 0x30u);
    printf("%s ", v13);
    printf("%s : SN isn't correct, sn: %s\n", "check_sn_qr_code_legality", v2);
    snprintf(byte_6006BC, 0x100u, "SN isn't correct, sn: %s", v2);
    sub_3CC5C(byte_6006BC, v13);
    return 0;
  }
}
