int __fastcall sub_11EBA8(_DWORD *a1, char ***a2, _DWORD *a3, _DWORD *a4)
{
  const char *v5; // r7
  _DWORD *v10; // r8
  const char *v11; // r9
  int v12; // r10
  _BYTE *v13; // r9
  void *v14; // r0
  size_t v15; // r2
  int v16; // r5
  int v17; // r3
  char **v18; // r0
  size_t v19; // lr
  void *v20; // r0
  size_t v21; // r1
  void *v22; // r0
  int v23; // r3
  int v24; // r1
  size_t v25; // r2
  int v26; // r1
  int v27; // r3
  int v28; // r8
  signed int v29; // r7
  void *v30; // r0
  int v31; // r3
  int v32; // r1
  int v33; // r7
  int v34; // [sp+14h] [bp-808h]
  _DWORD v35[513]; // [sp+18h] [bp-804h] BYREF

  v5 = (const char *)a1[1];
  if ( !strcmp(v5, "language") )
  {
    if ( *a2 )
    {
      sub_D0048(34, 150, 155, (int)"crypto/x509v3/v3_pci.c", 95);
      sub_D1240(6, "section:", *a1, ",name:", a1[1], ",value:", a1[2]);
      return 0;
    }
    v18 = sub_EB03C((char *)a1[2], 0);
    *a2 = v18;
    if ( !v18 )
    {
      sub_D0048(34, 150, 110, (int)"crypto/x509v3/v3_pci.c", 101);
      sub_D1240(6, "section:", *a1, ",name:", a1[1], ",value:", a1[2]);
      return 0;
    }
    return 1;
  }
  if ( !strcmp(v5, "pathlen") )
  {
    if ( *a3 )
    {
      sub_D0048(34, 150, 157, (int)"crypto/x509v3/v3_pci.c", 108);
      sub_D1240(6, "section:", *a1, ",name:", a1[1], ",value:", a1[2]);
      return 0;
    }
    if ( !sub_1226F8(a1, a3) )
    {
      sub_D0048(34, 150, 156, (int)"crypto/x509v3/v3_pci.c", 114);
      sub_D1240(6, "section:", *a1, ",name:", a1[1], ",value:", a1[2]);
      return 0;
    }
  }
  else if ( !strcmp(v5, "policy") )
  {
    v10 = (_DWORD *)*a4;
    if ( *a4 )
    {
      v34 = 0;
    }
    else
    {
      v10 = (_DWORD *)sub_B2068();
      *a4 = v10;
      if ( !v10 )
      {
        sub_D0048(34, 150, 65, (int)"crypto/x509v3/v3_pci.c", 124);
        sub_D1240(6, "section:", *a1, ",name:", a1[1], ",value:", a1[2]);
        return 0;
      }
      v34 = 1;
    }
    v11 = (const char *)a1[2];
    if ( !strncmp(v11, "hex:", 4u) )
    {
      v13 = sub_E9FB4(v11 + 4, v35);
      if ( v13 )
      {
        v14 = CRYPTO_realloc(
                *(void **)(*a4 + 8),
                (void *)(v35[0] + *(_DWORD *)*a4 + 1),
                (int)"crypto/x509v3/v3_pci.c",
                140);
        if ( v14 )
        {
          v15 = v35[0];
          *(_DWORD *)(*a4 + 8) = v14;
          memcpy((void *)(*(_DWORD *)(*a4 + 8) + *(_DWORD *)*a4), v13, v15);
          v16 = *(_DWORD *)(*a4 + 8);
          v17 = v35[0] + *(_DWORD *)*a4;
          *(_DWORD *)*a4 = v17;
          *(_BYTE *)(v16 + v17) = 0;
          CRYPTO_free(v13);
          return 1;
        }
        CRYPTO_free(v13);
        CRYPTO_free(*(void **)(*a4 + 8));
        *(_DWORD *)(*a4 + 8) = 0;
        *(_DWORD *)*a4 = 0;
        sub_D0048(34, 150, 65, (int)"crypto/x509v3/v3_pci.c", 156);
        sub_D1240(6, "section:", *a1, ",name:", a1[1], ",value:", a1[2]);
      }
      else
      {
        sub_D1240(6, "section:", *a1, ",name:", a1[1], ",value:", a1[2]);
      }
    }
    else
    {
      v12 = strncmp(v11, "file:", 5u);
      if ( v12 )
      {
        if ( !strncmp(v11, "text:", 5u) )
        {
          v19 = strlen(v11 + 5);
          v20 = (void *)v10[2];
          v21 = *v10 + v19;
          v35[0] = v19;
          v22 = CRYPTO_realloc(v20, (void *)(v21 + 1), (int)"crypto/x509v3/v3_pci.c", 204);
          v23 = *a4;
          if ( v22 )
          {
            v24 = a1[2];
            v25 = v35[0];
            *(_DWORD *)(v23 + 8) = v22;
            memcpy((void *)(*(_DWORD *)(*a4 + 8) + *(_DWORD *)*a4), (const void *)(v24 + 5), v25);
            v26 = *(_DWORD *)(*a4 + 8);
            v27 = v35[0] + *(_DWORD *)*a4;
            *(_DWORD *)*a4 = v27;
            *(_BYTE *)(v26 + v27) = 0;
            return 1;
          }
          CRYPTO_free(*(void **)(v23 + 8));
          *(_DWORD *)(*a4 + 8) = 0;
          *(_DWORD *)*a4 = 0;
          sub_D0048(34, 150, 65, (int)"crypto/x509v3/v3_pci.c", 219);
          sub_D1240(6, "section:", *a1, ",name:", a1[1], ",value:", a1[2]);
        }
        else
        {
          sub_D0048(34, 150, 152, (int)"crypto/x509v3/v3_pci.c", 225);
          sub_D1240(6, "section:", *a1, ",name:", a1[1], ",value:", a1[2]);
        }
      }
      else
      {
        v28 = sub_B782C((int)(v11 + 5), "r");
        if ( v28 )
        {
          do
          {
            while ( 1 )
            {
              v29 = sub_B6740(v28, (int)v35, 2048);
              if ( v29 <= 0 )
                break;
              v30 = CRYPTO_realloc(
                      *(void **)(*a4 + 8),
                      (void *)(*(_DWORD *)*a4 + v29 + 1),
                      (int)"crypto/x509v3/v3_pci.c",
                      176);
              v31 = *a4;
              v12 = (int)v30;
              if ( !v30 )
              {
                CRYPTO_free(*(void **)(v31 + 8));
                *(_DWORD *)(*a4 + 8) = 0;
                *(_DWORD *)*a4 = 0;
                sub_D0048(34, 150, 65, (int)"crypto/x509v3/v3_pci.c", 183);
                sub_D1240(6, "section:", *a1, ",name:", a1[1], ",value:", a1[2]);
                sub_B717C(v28);
                goto LABEL_15;
              }
              *(_DWORD *)(v31 + 8) = v30;
              memcpy((void *)(*(_DWORD *)(*a4 + 8) + *(_DWORD *)*a4), v35, v29);
              v32 = *(_DWORD *)(*a4 + 8);
              v33 = v29 + *(_DWORD *)*a4;
              *(_DWORD *)*a4 = v33;
              *(_BYTE *)(v32 + v33) = 0;
            }
            if ( v29 )
            {
              sub_B717C(v28);
              sub_D0048(34, 150, 32, (int)"crypto/x509v3/v3_pci.c", 197);
              sub_D1240(6, "section:", *a1, ",name:", a1[1], ",value:", a1[2]);
              goto LABEL_15;
            }
          }
          while ( sub_B6708(v28, 8) );
          sub_B717C(v28);
          if ( v12 )
            return 1;
          sub_D0048(34, 150, 65, (int)"crypto/x509v3/v3_pci.c", 230);
          sub_D1240(6, "section:", *a1, ",name:", a1[1], ",value:", a1[2]);
        }
        else
        {
          sub_D0048(34, 150, 32, (int)"crypto/x509v3/v3_pci.c", 166);
          sub_D1240(6, "section:", *a1, ",name:", a1[1], ",value:", a1[2]);
        }
      }
    }
LABEL_15:
    if ( v34 )
    {
      j_ASN1_STRING_free(*a4);
      *a4 = 0;
    }
    return 0;
  }
  return 1;
}
