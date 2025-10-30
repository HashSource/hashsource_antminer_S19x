unsigned int __fastcall sub_27700(_DWORD *a1, _DWORD *a2, unsigned int a3, unsigned int a4, int a5)
{
  int v6; // r2
  int v7; // r11
  int v8; // r4
  int v9; // r0
  int digestbyname; // r0
  int v11; // r3
  unsigned int v12; // r4
  _DWORD *v14; // r4
  unsigned int v15; // r12
  _DWORD *v16; // r1
  unsigned int v17; // r2
  unsigned int v18; // r3
  _DWORD *v19; // t1
  int v20; // r2
  int v21; // r3
  int v22; // [sp+8h] [bp-74h] BYREF
  _DWORD *v23; // [sp+Ch] [bp-70h] BYREF
  _DWORD *v24; // [sp+10h] [bp-6Ch]
  unsigned int v25; // [sp+14h] [bp-68h]
  unsigned int v26; // [sp+18h] [bp-64h]
  _DWORD *v27; // [sp+1Ch] [bp-60h]
  _DWORD *v28; // [sp+20h] [bp-5Ch]
  int v29; // [sp+24h] [bp-58h]
  int v30; // [sp+28h] [bp-54h]
  unsigned int v31; // [sp+2Ch] [bp-50h]
  unsigned int v32; // [sp+30h] [bp-4Ch]
  unsigned int v33[16]; // [sp+34h] [bp-48h] BYREF

  if ( !a2 )
    return 0;
  v6 = *(unsigned __int16 *)a1;
  if ( v6 == 2 )
  {
    a1 = (_DWORD *)a1[1];
    a2 = (_DWORD *)a2[1];
    v26 = bswap32(a4);
    v7 = 16;
    v23 = a1;
    v24 = a2;
    v25 = bswap32(a3);
  }
  else if ( v6 == 10 )
  {
    v14 = a2;
    v15 = bswap32(a4);
    v16 = (_DWORD *)a1[3];
    v17 = a1[4];
    v18 = a1[5];
    v23 = (_DWORD *)a1[2];
    v24 = v16;
    v25 = v17;
    v26 = v18;
    v7 = 40;
    v19 = (_DWORD *)v14[2];
    v14 += 2;
    a1 = v19;
    a2 = (_DWORD *)v14[1];
    v20 = v14[2];
    v21 = v14[3];
    v27 = v19;
    v28 = a2;
    v29 = v20;
    v30 = v21;
    v32 = v15;
    v31 = bswap32(a3);
  }
  else
  {
    v7 = 0;
  }
  v8 = EVP_MD_CTX_new(a1, a2);
  EVP_MD_CTX_set_flags(v8, 8);
  v9 = OBJ_nid2sn(crypto_nid);
  digestbyname = EVP_get_digestbyname(v9);
  EVP_DigestInit_ex(v8, digestbyname, 0, v11);
  EVP_DigestUpdate(v8, &v23, v7);
  EVP_DigestFinal(v8, v33, &v22);
  EVP_MD_CTX_free(v8);
  v12 = bswap32(v33[0]);
  if ( a5 )
  {
    sub_633B4(a3, crypto_nid, v33, v22, 0);
    sub_630C4(a3, a5);
  }
  return v12;
}
