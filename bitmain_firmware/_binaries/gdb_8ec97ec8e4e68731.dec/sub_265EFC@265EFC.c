void __fastcall sub_265EFC(wint_t a1, int a2, int a3, int a4, unsigned int a5, struct obstack *a6, int c, int *a8)
{
  int v9; // r9
  size_t v10; // r0
  char *v11; // r2
  size_t v12; // r5
  const char *v13; // r1
  void *v14; // r0
  size_t v15; // r0
  char *next_free; // r2
  size_t v17; // r0
  char *v18; // r2
  size_t v19; // r0
  char *v20; // r2
  size_t v21; // r0
  char *v22; // r2
  size_t v23; // r0
  char *v24; // r2
  size_t v25; // r0
  char *v26; // r2
  wint_t v30; // r0
  char *v31; // r5
  bool v32; // zf
  unsigned int v33; // r6
  size_t v34; // r0
  size_t v35; // r7
  int i; // r9
  unsigned __int64 v37; // r0
  int v38; // r3
  int v39; // r6
  int v40; // r10
  int v41; // t1
  unsigned __int8 v42[36]; // [sp+8h] [bp-24h] BYREF

  v9 = *a8;
  *a8 = 0;
  switch ( a1 )
  {
    case 7u:
      v15 = wcslen((const wchar_t *)"\\");
      next_free = a6->next_free;
      v12 = 4 * v15;
      if ( 4 * v15 > a6->chunk_limit - next_free )
      {
        obstack_newchunk(a6, 4 * v15);
        next_free = a6->next_free;
      }
      v13 = "\\";
      v14 = next_free;
      goto LABEL_23;
    case 8u:
      v17 = wcslen((const wchar_t *)"\\");
      v18 = a6->next_free;
      v12 = 4 * v17;
      if ( 4 * v17 > a6->chunk_limit - v18 )
      {
        obstack_newchunk(a6, 4 * v17);
        v18 = a6->next_free;
      }
      v13 = "\\";
      v14 = v18;
      goto LABEL_23;
    case 9u:
      v19 = wcslen((const wchar_t *)"\\");
      v20 = a6->next_free;
      v12 = 4 * v19;
      if ( 4 * v19 > a6->chunk_limit - v20 )
      {
        obstack_newchunk(a6, 4 * v19);
        v20 = a6->next_free;
      }
      v13 = "\\";
      v14 = v20;
      goto LABEL_23;
    case 0xAu:
      v23 = wcslen((const wchar_t *)"\\");
      v24 = a6->next_free;
      v12 = 4 * v23;
      if ( 4 * v23 > a6->chunk_limit - v24 )
      {
        obstack_newchunk(a6, 4 * v23);
        v24 = a6->next_free;
      }
      v13 = "\\";
      v14 = v24;
      goto LABEL_23;
    case 0xBu:
      v21 = wcslen((const wchar_t *)"\\");
      v22 = a6->next_free;
      v12 = 4 * v21;
      if ( 4 * v21 > a6->chunk_limit - v22 )
      {
        obstack_newchunk(a6, 4 * v21);
        v22 = a6->next_free;
      }
      v13 = "\\";
      v14 = v22;
      goto LABEL_23;
    case 0xCu:
      v25 = wcslen((const wchar_t *)"\\");
      v26 = a6->next_free;
      v12 = 4 * v25;
      if ( 4 * v25 > a6->chunk_limit - v26 )
      {
        obstack_newchunk(a6, 4 * v25);
        v26 = a6->next_free;
      }
      v13 = "\\";
      v14 = v26;
      goto LABEL_23;
    case 0xDu:
      v10 = wcslen((const wchar_t *)"\\");
      v11 = a6->next_free;
      v12 = 4 * v10;
      if ( 4 * v10 > a6->chunk_limit - v11 )
      {
        obstack_newchunk(a6, 4 * v10);
        v11 = a6->next_free;
      }
      v13 = "\\";
      v14 = v11;
LABEL_23:
      memcpy(v14, v13, v12);
      a6->next_free += v12;
      break;
    default:
      if ( !sub_265E3C(a1) || v9 && (iswdigit(a1) || a1 - 56 <= 1) )
      {
        if ( a4 <= a3 )
        {
          for ( i = a4; ; i += a4 )
          {
            LODWORD(v37) = sub_15C250((unsigned __int8 *)(a2 - a4 + i), a4, a5);
            if ( v37 > 0x1FF )
              sub_93170((char *)v42, 0x1Eu, "\\x%lx", (_DWORD)v37);
            else
              sub_93170((char *)v42, 0x1Eu, "\\%.3o", (_DWORD)v37);
            sub_265E88(v42, (int)a6);
            if ( a4 + i > a3 )
              break;
          }
        }
        else
        {
          i = 0;
        }
        if ( a3 > i )
        {
          v38 = a2 - 1;
          v39 = a2 + i - 1;
          v40 = v38 + a3;
          do
          {
            v41 = *(unsigned __int8 *)++v39;
            sub_93170((char *)v42, 5u, "\\%.3o", v41);
            sub_265E88(v42, (int)a6);
          }
          while ( v40 != v39 );
        }
        *a8 = 1;
      }
      else
      {
        v30 = btowc(c);
        v31 = a6->next_free;
        v32 = a1 == v30;
        if ( a1 != v30 )
          v32 = a1 == 92;
        v33 = a6->chunk_limit - v31;
        if ( v32 )
        {
          v34 = wcslen((const wchar_t *)"\\");
          v35 = 4 * v34;
          if ( 4 * v34 > v33 )
          {
            obstack_newchunk(a6, 4 * v34);
            v31 = a6->next_free;
          }
          memcpy(v31, "\\", v35);
          v31 = &a6->next_free[v35];
          v33 = a6->chunk_limit - v31;
          a6->next_free = v31;
        }
        if ( v33 <= 3 )
        {
          obstack_newchunk(a6, 4);
          v31 = a6->next_free;
        }
        *(_DWORD *)v31 = a1;
        a6->next_free += 4;
      }
      break;
  }
}
