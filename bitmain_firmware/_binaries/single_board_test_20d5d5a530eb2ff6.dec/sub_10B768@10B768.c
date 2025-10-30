const char *__fastcall sub_10B768(const char *a1, const char *a2, char **a3, char **a4, char *a5, char *a6)
{
  bool v6; // zf
  bool v7; // zf
  int v10; // r9
  int v13; // r1
  char *v14; // r8
  int v15; // r1
  _DWORD *v16; // r0
  const char *v17; // r10
  int v18; // r1
  int *v19; // r0
  int v20; // r0
  int v21; // r9
  int v22; // r0
  char *v23; // r6
  int v24; // r0
  int v25; // r2
  int v26; // r0
  char **v28; // r0
  char *v29; // r0
  char *v30; // r7
  char *v31; // [sp+8h] [bp-13A4h]
  int v32; // [sp+Ch] [bp-13A0h]
  int *v33; // [sp+18h] [bp-1394h] BYREF
  int *v34; // [sp+1Ch] [bp-1390h] BYREF
  char v35[8]; // [sp+20h] [bp-138Ch] BYREF
  char var9C8[2524]; // [sp+9E4h] [bp-9C8h] BYREF

  v6 = a2 == 0;
  if ( a2 )
    v6 = a1 == 0;
  v33 = 0;
  v34 = 0;
  if ( v6 )
    goto LABEL_31;
  v7 = a4 == 0;
  if ( a4 )
    v7 = a3 == 0;
  v10 = v7;
  if ( v7 )
    goto LABEL_31;
  if ( !a5 )
  {
    v28 = sub_10ACE4(a6);
    if ( v28 )
    {
      v14 = v28[2];
      v10 = (int)v28[1];
      v17 = *v28;
      v32 = 0;
      v31 = 0;
      goto LABEL_16;
    }
LABEL_31:
    v10 = 0;
    v32 = 0;
    v23 = 0;
    v17 = 0;
    v26 = 0;
    goto LABEL_30;
  }
  v13 = sub_10AE80(v35, a5);
  if ( v13 <= 0 )
    goto LABEL_31;
  v14 = (char *)sub_B8AEC(v35, v13, (_DWORD *)v10);
  if ( !v14 )
    goto LABEL_31;
  v15 = sub_10AE80(v35, a6);
  if ( v15 <= 0 )
  {
    v23 = (char *)v10;
    v32 = v10;
    v17 = (const char *)v10;
    v26 = (int)v14;
    goto LABEL_30;
  }
  v16 = sub_B8AEC(v35, v15, (_DWORD *)v10);
  v10 = (int)v16;
  if ( !v16 )
  {
    v17 = 0;
    v32 = 0;
    v23 = 0;
    v26 = (int)v14;
    goto LABEL_30;
  }
  v32 = (int)v16;
  v31 = v14;
  v17 = "*";
LABEL_16:
  if ( *a3 )
  {
    v18 = sub_10AE80(var9C8, *a3);
    if ( v18 <= 0 )
      goto LABEL_37;
    v19 = sub_B8AEC(var9C8, v18, 0);
    v33 = v19;
  }
  else
  {
    if ( sub_F497C((int)var9C8, 20) <= 0 )
    {
      v10 = 0;
      v23 = 0;
      v17 = 0;
      v26 = (int)v31;
      goto LABEL_30;
    }
    v19 = sub_B8AEC(var9C8, 20, 0);
    v33 = v19;
  }
  if ( !v19 || (v19 = (int *)sub_10B680(a1, a2, &v33, &v34, (int)v14, v10)) == 0 )
  {
    v10 = (int)v19;
    v23 = (char *)v19;
    v17 = (const char *)v19;
    v26 = (int)v31;
    goto LABEL_30;
  }
  if ( sub_B8648(v34, (int)v35) < 0 )
  {
LABEL_37:
    v10 = 0;
    v26 = (int)v31;
    v23 = 0;
    v17 = 0;
    goto LABEL_30;
  }
  v20 = sub_B85BC(v34);
  v21 = v20 + 14;
  v22 = v20 + 7;
  if ( v22 >= 0 )
    v21 = v22;
  v10 = 2 * (v21 >> 3);
  v23 = (char *)CRYPTO_malloc((void *)v10);
  if ( v23 )
  {
    v24 = sub_B85BC(v34);
    v25 = v24 + 14;
    if ( v24 + 7 >= 0 )
      v25 = v24 + 7;
    if ( sub_10ADB0(v23, v35, v25 >> 3) )
    {
      if ( !*a3 )
      {
        v29 = (char *)CRYPTO_malloc((void *)0x28);
        v30 = v29;
        if ( !v29 )
        {
          v17 = 0;
          v26 = (int)v31;
          goto LABEL_30;
        }
        if ( !sub_10ADB0(v29, var9C8, 20) )
        {
          v17 = 0;
          CRYPTO_free(v30);
          v26 = (int)v31;
          goto LABEL_30;
        }
        *a3 = v30;
      }
      v26 = (int)v31;
      *a4 = v23;
      v23 = 0;
    }
    else
    {
      v17 = 0;
      v26 = (int)v31;
    }
  }
  else
  {
    v17 = 0;
    v26 = (int)v31;
  }
LABEL_30:
  sub_B895C(v26);
  sub_B895C(v32);
  sub_E0758(v23, v10, (size_t)"crypto/srp/srp_vfy.c");
  sub_B87C8(v33);
  sub_B87C8(v34);
  return v17;
}
