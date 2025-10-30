unsigned int __fastcall sub_272C8(_DWORD *a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v6; // r5
  int v7; // r2
  unsigned int v8; // r12
  unsigned int v9; // r1
  unsigned int v10; // r2
  unsigned int v11; // r3
  int v12; // r11
  _DWORD *v13; // r5
  _DWORD *v14; // t1
  int v15; // r2
  int v16; // r3
  int v17; // r5
  int v18; // r0
  int digestbyname; // r0
  int v20; // r3
  int v22; // [sp+8h] [bp-74h] BYREF
  _DWORD *v23; // [sp+Ch] [bp-70h] BYREF
  unsigned int v24; // [sp+10h] [bp-6Ch]
  unsigned int v25; // [sp+14h] [bp-68h]
  unsigned int v26; // [sp+18h] [bp-64h]
  _DWORD *v27; // [sp+1Ch] [bp-60h]
  unsigned int v28; // [sp+20h] [bp-5Ch]
  int v29; // [sp+24h] [bp-58h]
  int v30; // [sp+28h] [bp-54h]
  unsigned int v31; // [sp+2Ch] [bp-50h]
  unsigned int v32; // [sp+30h] [bp-4Ch]
  unsigned int v33[16]; // [sp+34h] [bp-48h] BYREF

  v6 = a2;
  if ( a2 )
  {
    v7 = *(unsigned __int16 *)a1;
    if ( v7 == 2 )
    {
      a1 = (_DWORD *)a1[1];
      a2 = *(_DWORD *)(a2 + 4);
      v26 = bswap32(a4);
      v12 = 16;
      v23 = a1;
      v24 = a2;
      v25 = bswap32(a3);
    }
    else if ( v7 == 10 )
    {
      v8 = bswap32(a4);
      v9 = a1[3];
      v10 = a1[4];
      v11 = a1[5];
      v23 = (_DWORD *)a1[2];
      v24 = v9;
      v25 = v10;
      v26 = v11;
      v12 = 40;
      v14 = *(_DWORD **)(v6 + 8);
      v13 = (_DWORD *)(v6 + 8);
      a1 = v14;
      a2 = v13[1];
      v15 = v13[2];
      v16 = v13[3];
      v27 = v14;
      v28 = a2;
      v29 = v15;
      v30 = v16;
      v32 = v8;
      v31 = bswap32(a3);
    }
    else
    {
      v12 = 0;
    }
    v17 = EVP_MD_CTX_new(a1, a2);
    EVP_MD_CTX_set_flags(v17, 8);
    v18 = OBJ_nid2sn(crypto_nid);
    digestbyname = EVP_get_digestbyname(v18);
    EVP_DigestInit_ex(v17, digestbyname, 0, v20);
    EVP_DigestUpdate(v17, &v23, v12);
    EVP_DigestFinal(v17, v33, &v22);
    EVP_MD_CTX_free(v17);
    v6 = bswap32(v33[0]);
    if ( a5 )
    {
      sub_624AC(a3, crypto_nid, v33, v22, 0);
      sub_621BC(a3, a5);
    }
  }
  return v6;
}
