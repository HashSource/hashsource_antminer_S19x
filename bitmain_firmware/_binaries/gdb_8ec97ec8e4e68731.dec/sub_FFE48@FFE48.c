int __fastcall sub_FFE48(int a1, char *a2)
{
  int v2; // r3
  int v5; // r3
  char *v6; // r2
  int v7; // t1
  void *v8; // r4
  size_t v9; // r0
  char *v10; // r8
  size_t v11; // r0
  size_t v12; // r7
  _DWORD *v13; // r2
  int v14; // r0
  int v15; // r1
  int v16; // r12
  _DWORD *v17; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r3
  bool v21; // zf
  int v22; // r2
  size_t v23; // r3
  char *s; // [sp+0h] [bp-24h] BYREF
  size_t v25; // [sp+4h] [bp-20h] BYREF
  void *ptr; // [sp+8h] [bp-1Ch] BYREF
  size_t v27; // [sp+Ch] [bp-18h]
  _DWORD v28[5]; // [sp+10h] [bp-14h] BYREF

  v2 = (unsigned __int8)*a2;
  if ( (word_438898[v2] & 0x200) != 0 )
  {
    if ( v2 == 117 )
    {
      if ( !strcmp(a2 + 1, "nsigned") )
        goto LABEL_8;
    }
    else if ( v2 == 115 && !strcmp(a2 + 1, "igned") )
    {
      goto LABEL_8;
    }
    v5 = (unsigned __int8)a2[1];
    if ( (word_438898[v5] & 0x204) != 0 )
    {
      v6 = a2 + 1;
      do
      {
        v7 = (unsigned __int8)*++v6;
        v5 = v7;
      }
      while ( (word_438898[v7] & 0x204) != 0 );
    }
    if ( !v5 )
      goto LABEL_19;
  }
LABEL_8:
  sub_7F64C(&ptr, (int)a2, 0);
  v8 = ptr;
  if ( !ptr )
  {
LABEL_19:
    *(_QWORD *)a1 = (unsigned int)(a1 + 8);
    *(_BYTE *)(a1 + 8) = 0;
    return a1;
  }
  v9 = strlen(a2);
  sub_7F564(&s, *((_DWORD *)ptr + 1), 2 * v9);
  v10 = s;
  if ( s )
  {
    ptr = v28;
    v11 = strlen(s);
    v12 = v11;
    v25 = v11;
    if ( v11 > 0xF )
    {
      v19 = (_DWORD *)sub_33B2BC(&ptr, &v25, 0);
      ptr = v19;
      v28[0] = v25;
    }
    else
    {
      if ( v11 == 1 )
      {
        v13 = v28;
        LOBYTE(v28[0]) = *s;
        goto LABEL_13;
      }
      if ( !v11 )
      {
        v13 = v28;
LABEL_13:
        v27 = v12;
        *((_BYTE *)v13 + v12) = 0;
        v14 = sub_33CAA0((int)&ptr, a2);
        v16 = a1 + 8;
        if ( v14 )
        {
          v20 = ptr;
          *(_DWORD *)a1 = v16;
          v21 = v20 == v28;
          if ( v20 == v28 )
          {
            v14 = v28[0];
            v15 = v28[1];
            v22 = v28[2];
            v20 = (_DWORD *)v28[3];
          }
          else
          {
            v22 = v28[0];
            *(_DWORD *)a1 = v20;
          }
          if ( v21 )
          {
            *(_DWORD *)(a1 + 8) = v14;
            *(_DWORD *)(a1 + 20) = v20;
          }
          v23 = v27;
          if ( v21 )
          {
            *(_DWORD *)(a1 + 12) = v15;
            *(_DWORD *)(a1 + 16) = v22;
          }
          else
          {
            *(_DWORD *)(a1 + 8) = v22;
          }
          *(_DWORD *)(a1 + 4) = v23;
        }
        else
        {
          v17 = ptr;
          *(_DWORD *)a1 = v16;
          *(_DWORD *)(a1 + 4) = 0;
          *(_BYTE *)(a1 + 8) = 0;
          if ( v17 != v28 )
            sub_339E64(v17);
        }
        goto LABEL_16;
      }
      v19 = v28;
    }
    memcpy(v19, v10, v12);
    v12 = v25;
    v13 = ptr;
    goto LABEL_13;
  }
  sub_946B0("internal error: string \"%s\" failed to be canonicalized", a2);
  *(_QWORD *)a1 = (unsigned int)(a1 + 8);
  *(_BYTE *)(a1 + 8) = 0;
LABEL_16:
  if ( s )
    free(s);
  sub_7F5D0((int)v8);
  sub_33AC04(v8);
  return a1;
}
