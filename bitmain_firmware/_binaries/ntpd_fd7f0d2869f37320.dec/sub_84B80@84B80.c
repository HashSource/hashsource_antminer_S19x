unsigned int __fastcall sub_84B80(unsigned int result, _DWORD *a2, const char **a3, unsigned int a4)
{
  unsigned int v4; // r10
  const char **v6; // r4
  unsigned __int8 *v8; // r5
  int v9; // r6
  int v10; // r3
  int v11; // t1
  unsigned int v12; // r3
  int v13; // r4
  const char *v14; // r8
  int v15; // r0
  int v16; // t1
  const char *v17; // r6
  int v18; // r3
  int v19; // t1
  size_t v20; // r10
  int v21; // r3
  unsigned int v22; // t1
  size_t v23; // r10
  int v24; // r5
  unsigned int v25; // r6
  int v26; // r8
  unsigned int v27; // r5
  char *v28; // r6
  int v29; // r3
  size_t v30; // r7
  char *v31; // r2
  unsigned int v32; // r5
  int v33; // r6
  int v34; // r3
  int v35; // r8
  int v36; // r3
  int v37; // t1
  int v38; // r3
  unsigned __int8 *v39; // r6
  int v40; // r3
  int v41; // t1
  bool v42; // zf
  unsigned __int8 *v43; // r6
  int v44; // r3
  int v45; // t1
  int v46; // [sp+Ch] [bp-B0h]
  unsigned int v47; // [sp+20h] [bp-9Ch]
  const char **v48; // [sp+24h] [bp-98h]
  int v49; // [sp+2Ch] [bp-90h]
  void *src; // [sp+30h] [bp-8Ch] BYREF
  char dest[136]; // [sp+34h] [bp-88h] BYREF

  v4 = result;
  v6 = a3;
  if ( result != 2 )
  {
    if ( result == 3 )
    {
      v23 = 1;
      v24 = (1 << a4) - 1;
      v25 = a2[7] & v24;
      if ( v25 )
      {
        v26 = 0;
        do
        {
          if ( (v25 & 1) != 0 )
            v23 += 4 + strlen(v6[v26]);
          if ( a4 <= ++v26 )
            break;
          v25 >>= 1;
        }
        while ( v25 );
      }
      result = (unsigned int)sub_7FBE0(v23);
      v27 = a2[7] & v24;
      a2[6] = result;
      v28 = (char *)result;
      if ( !v27 )
      {
        *(_BYTE *)result = 0;
        return result;
      }
      while ( 1 )
      {
        v29 = v27 & 1;
        v27 >>= 1;
        if ( v29 )
        {
          v30 = strlen(*v6);
          result = (unsigned int)memcpy(v28, *v6, v30);
          v31 = &v28[v30];
          if ( !v27 )
          {
            *v31 = 0;
            return result;
          }
          *(_WORD *)&v28[v30] = 11040;
          v28 = v31 + 3;
          v31[2] = 32;
        }
        ++v6;
      }
    }
    if ( result == 1 )
      return sub_7DD4C(1u, a2, a3, a4);
    if ( (a2[4] & 8) != 0 )
      return result;
    v8 = (unsigned __int8 *)a2[6];
    v9 = a2[7];
    result = dword_108358;
    if ( !dword_108358 )
      result = sub_7F738(12);
    v10 = *v8;
    if ( *(_BYTE *)(result + v10) )
    {
      do
      {
        v11 = *++v8;
        v10 = v11;
      }
      while ( *(_BYTE *)(result + v11) );
    }
    if ( !v10 )
      goto LABEL_77;
    v46 = v9;
    switch ( v10 )
    {
      case '=':
        v43 = v8 + 1;
        result = dword_108358;
        if ( !dword_108358 )
          result = sub_7F738(12);
        v44 = v8[1];
        if ( *(_BYTE *)(result + v44) )
        {
          do
          {
            v45 = *++v43;
            v44 = v45;
          }
          while ( *(_BYTE *)(result + v45) );
        }
        if ( v44 == 61 )
          goto LABEL_77;
        if ( v44 != 94 )
        {
          if ( v44 != 44 )
          {
            v8 = v43;
            v49 = 0;
            v46 = 0;
            goto LABEL_15;
          }
          goto LABEL_77;
        }
        v8 = v43;
        v46 = 0;
        break;
      case '^':
        break;
      case ',':
        goto LABEL_77;
      default:
        v49 = 0;
LABEL_15:
        v12 = *v8;
        v47 = v4;
        v48 = v6;
        while ( 1 )
        {
          while ( 1 )
          {
            if ( !v12 )
            {
LABEL_100:
              if ( v49 )
                v46 = ~v46;
              if ( a4 <= 0x1F )
                v46 &= ~(-1 << a4);
              a2[7] = v46;
              return result;
            }
            if ( v12 != 44 )
              break;
            v39 = v8 + 1;
            result = dword_108358;
            if ( !dword_108358 )
              result = sub_7F738(12);
            v40 = v8[1];
            if ( *(_BYTE *)(result + v40) )
            {
              do
              {
                v41 = *++v39;
                v40 = v41;
              }
              while ( *(_BYTE *)(result + v41) );
            }
            v42 = v40 == 44;
            if ( v40 != 44 )
              v42 = v40 == 124;
            if ( v42 )
              goto LABEL_77;
            v12 = *v39;
            v8 = v39;
          }
          if ( v12 > 0x2C )
          {
            if ( v12 == 45 )
            {
LABEL_89:
              v13 = 1;
              goto LABEL_22;
            }
            if ( v12 == 124 )
              goto LABEL_21;
          }
          else
          {
            if ( v12 == 33 )
              goto LABEL_89;
            if ( v12 == 43 )
            {
LABEL_21:
              v13 = 0;
LABEL_22:
              v14 = (const char *)(v8 + 1);
              v15 = dword_108358;
              if ( !dword_108358 )
                v15 = sub_7F738(12);
              if ( *(_BYTE *)(v15 + v8[1]) )
              {
                do
                  v16 = *(unsigned __int8 *)++v14;
                while ( *(_BYTE *)(v15 + v16) );
              }
              goto LABEL_26;
            }
          }
          v14 = (const char *)v8;
          v13 = 0;
LABEL_26:
          result = dword_1083D0;
          if ( !dword_1083D0 )
            result = sub_7F738(42);
          if ( !*v14 || *(_BYTE *)(result + *(unsigned __int8 *)v14) )
            goto LABEL_100;
          v17 = v14;
          do
          {
            v19 = *(unsigned __int8 *)++v17;
            v18 = v19;
            if ( !v19 )
            {
              v20 = v17 - v14;
              v8 = (unsigned __int8 *)v17;
              goto LABEL_34;
            }
          }
          while ( !*(_BYTE *)(result + v18) );
          v20 = v17 - v14;
          v8 = (unsigned __int8 *)v17;
LABEL_34:
          if ( !v20 )
            goto LABEL_100;
          if ( v20 == 3 )
          {
            if ( !strncmp(v14, "all", 3u) )
            {
              v46 = -(v13 ^ 1);
              goto LABEL_41;
            }
          }
          else if ( v20 == 4 && !strncmp(v14, "none", 4u) )
          {
            v21 = v46;
            if ( !v13 )
              v21 = 0;
            v46 = v21;
            goto LABEL_41;
          }
          result = strtoul(v14, (char **)&src, 0);
          if ( src != v17 )
          {
            memcpy(dest, src, v20);
            dest[v20] = 0;
            result = sub_7E084(dest, v47, a2, v48, a4);
            if ( a4 <= result )
              goto LABEL_77;
            result = 1 << result;
            if ( !result )
              goto LABEL_77;
          }
          if ( v13 )
            v38 = v46 & ~result;
          else
            v38 = v46 | result;
          v46 = v38;
LABEL_41:
          result = dword_108358;
          if ( !dword_108358 )
            result = sub_7F738(12);
          v12 = *(unsigned __int8 *)v17;
          if ( *(_BYTE *)(result + v12) )
          {
            do
            {
              v22 = *++v8;
              v12 = v22;
            }
            while ( *(_BYTE *)(result + v22) );
          }
        }
    }
    result = dword_108358;
    if ( !dword_108358 )
      result = sub_7F738(12);
    v36 = *++v8;
    if ( *(_BYTE *)(result + v36) )
    {
      do
      {
        v37 = *++v8;
        v36 = v37;
      }
      while ( *(_BYTE *)(result + v37) );
    }
    if ( v36 != 44 )
    {
      v49 = 1;
      goto LABEL_15;
    }
LABEL_77:
    a2[7] = 0;
    return result;
  }
  v32 = a2[7] & ~(-1 << a4);
  if ( v32 )
  {
    v33 = 0;
    v34 = 0;
    do
    {
      if ( (v32 & 1) != 0 )
      {
        v35 = v34 + 1;
        if ( v34 )
          fwrite(" | ", 1u, 3u, stdout);
        result = fputs(v6[v33], stdout);
        v34 = v35;
      }
      if ( a4 <= ++v33 )
        break;
      v32 >>= 1;
    }
    while ( v32 );
  }
  return result;
}
