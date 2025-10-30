void __fastcall sub_FA5E0(int a1, int a2, int a3, _DWORD *a4)
{
  int v7; // r5
  int v8; // r3
  bool v9; // cc
  int v10; // r4
  int v11; // r4
  int v12; // r4
  int v13; // r3
  int v14; // r2

  v7 = *(_DWORD *)(a1 + 20);
  if ( a2 == 4098 )
    goto LABEL_51;
  if ( a2 <= 4098 )
  {
    if ( a2 == 7 )
      return;
    if ( a2 <= 7 )
    {
      if ( a2 > 4 )
        return;
      if ( a2 < 3 )
      {
        if ( a2 == 1 )
        {
          if ( sub_FA528((int)a4, *(_DWORD *)(v7 + 20)) )
          {
            if ( *(_DWORD *)(v7 + 36) == -1 )
            {
              *(_DWORD *)(v7 + 24) = a4;
            }
            else
            {
              v11 = sub_D8C70(*(_DWORD *)(v7 + 24));
              if ( v11 != sub_D8C70((int)a4) )
                sub_D0048(4, 143, 145, (int)"crypto/rsa/rsa_pmeth.c", 506);
            }
          }
          return;
        }
        if ( a2 != 2 )
          return;
LABEL_38:
        sub_D0048(4, 143, 148, (int)"crypto/rsa/rsa_pmeth.c", 580);
        return;
      }
    }
    else
    {
      if ( a2 == 11 )
        return;
      if ( a2 > 11 )
      {
        if ( a2 == 13 )
          goto LABEL_66;
        if ( a2 != 4097 )
          return;
        if ( (unsigned int)(a3 - 1) <= 5 )
        {
          if ( !sub_FA528(*(_DWORD *)(v7 + 24), a3) )
            return;
          if ( a3 == 6 )
          {
            if ( (*(_DWORD *)(a1 + 16) & 0x18) != 0 )
              goto LABEL_31;
          }
          else if ( **(_DWORD **)a1 != 912 )
          {
            if ( a3 != 4 )
            {
LABEL_33:
              *(_DWORD *)(v7 + 20) = a3;
              return;
            }
            if ( (*(_DWORD *)(a1 + 16) & 0x300) != 0 )
            {
LABEL_31:
              if ( !*(_DWORD *)(v7 + 24) )
                *(_DWORD *)(v7 + 24) = sub_D93D8();
              goto LABEL_33;
            }
          }
        }
        sub_D0048(4, 143, 144, (int)"crypto/rsa/rsa_pmeth.c", 428);
        return;
      }
      if ( a2 < 9 )
        return;
    }
    if ( **(_DWORD **)a1 != 912 )
      return;
    goto LABEL_38;
  }
  if ( a2 == 4104 )
    goto LABEL_78;
  if ( a2 <= 4104 )
  {
    if ( a2 != 4101 )
    {
      if ( a2 <= 4101 )
      {
        if ( a2 == 4099 )
        {
          if ( a3 < 512 )
            sub_D0048(4, 143, 120, (int)"crypto/rsa/rsa_pmeth.c", 465);
          else
            *(_DWORD *)v7 = a3;
        }
        else if ( a4 && sub_B870C((int)a4) && !sub_B86D8((int)a4) )
        {
          sub_B895C(*(_DWORD *)(v7 + 4));
          *(_DWORD *)(v7 + 4) = a4;
        }
        else
        {
          sub_D0048(4, 143, 101, (int)"crypto/rsa/rsa_pmeth.c", 473);
        }
        return;
      }
      if ( a2 == 4102 )
      {
        *a4 = *(_DWORD *)(v7 + 20);
        return;
      }
LABEL_51:
      if ( *(_DWORD *)(v7 + 20) != 6 )
      {
        sub_D0048(4, 143, 146, (int)"crypto/rsa/rsa_pmeth.c", 438);
        return;
      }
      if ( a2 == 4103 )
      {
        *a4 = *(_DWORD *)(v7 + 32);
        return;
      }
      if ( a3 < -3 )
        return;
      v10 = *(_DWORD *)(v7 + 36);
      if ( v10 != -1 )
      {
        if ( a3 == -2 )
        {
          if ( *(_DWORD *)(a1 + 16) == 16 )
          {
            sub_D0048(4, 143, 146, (int)"crypto/rsa/rsa_pmeth.c", 449);
            return;
          }
        }
        else if ( a3 == -1 )
        {
          if ( v10 > sub_D8C78(*(_DWORD *)(v7 + 24)) )
          {
LABEL_59:
            sub_D0048(4, 143, 164, (int)"crypto/rsa/rsa_pmeth.c", 455);
            return;
          }
        }
        else if ( a3 >= 0 && a3 < v10 )
        {
          goto LABEL_59;
        }
      }
      *(_DWORD *)(v7 + 32) = a3;
      return;
    }
LABEL_78:
    if ( (*(_DWORD *)(v7 + 20) & 0xFFFFFFFD) != 4 )
    {
      sub_D0048(4, 143, 156, (int)"crypto/rsa/rsa_pmeth.c", 520);
      return;
    }
    if ( a2 != 4104 )
    {
      if ( *(_DWORD *)(v7 + 36) == -1 )
      {
        *(_DWORD *)(v7 + 28) = a4;
      }
      else
      {
        v12 = sub_D8C70(*(_DWORD *)(v7 + 28));
        if ( v12 != sub_D8C70((int)a4) )
          sub_D0048(4, 143, 152, (int)"crypto/rsa/rsa_pmeth.c", 532);
      }
      return;
    }
    v13 = *(_DWORD *)(v7 + 28);
    if ( v13 )
    {
      *a4 = v13;
      return;
    }
LABEL_66:
    *a4 = *(_DWORD *)(v7 + 24);
    return;
  }
  if ( a2 == 4107 )
    goto LABEL_64;
  if ( a2 > 4107 )
  {
    if ( a2 != 4108 )
    {
      if ( a2 == 4109 )
      {
        if ( (unsigned int)(a3 - 2) > 3 )
          sub_D0048(4, 143, 165, (int)"crypto/rsa/rsa_pmeth.c", 482);
        else
          *(_DWORD *)(v7 + 8) = a3;
      }
      return;
    }
    if ( *(_DWORD *)(v7 + 20) == 4 )
    {
      *a4 = *(_DWORD *)(v7 + 44);
      return;
    }
    v14 = 556;
LABEL_96:
    sub_D0048(4, 143, 141, (int)"crypto/rsa/rsa_pmeth.c", v14);
    return;
  }
  if ( a2 == 4105 )
  {
LABEL_64:
    if ( *(_DWORD *)(v7 + 20) != 4 )
    {
      v14 = 491;
      goto LABEL_96;
    }
    if ( a2 != 4107 )
    {
      *(_DWORD *)(v7 + 24) = a4;
      return;
    }
    goto LABEL_66;
  }
  if ( *(_DWORD *)(v7 + 20) != 4 )
  {
    v14 = 541;
    goto LABEL_96;
  }
  CRYPTO_free(*(void **)(v7 + 44));
  v9 = (int)a4 <= 0;
  if ( a4 )
    v9 = a3 <= 0;
  if ( v9 )
  {
    v8 = 0;
  }
  else
  {
    *(_DWORD *)(v7 + 44) = a4;
    *(_DWORD *)(v7 + 48) = a3;
  }
  if ( v9 )
  {
    *(_DWORD *)(v7 + 44) = v8;
    *(_DWORD *)(v7 + 48) = v8;
  }
}
