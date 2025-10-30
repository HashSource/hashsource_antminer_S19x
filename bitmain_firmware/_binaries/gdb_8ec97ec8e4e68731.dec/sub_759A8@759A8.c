int __fastcall sub_759A8(char **a1, struct obstack *a2)
{
  char *v3; // r6
  int v5; // r8
  __int64 v6; // r2
  char *v7; // r5
  char *v8; // r3
  int v9; // t1
  int result; // r0
  unsigned __int8 *v11; // r5
  char *next_free; // r3
  char *v13; // r3
  int v14; // r5
  char *v15; // r3
  char *v16; // r3
  char *v17; // r9
  int v18; // r0
  unsigned __int8 *v19; // r6
  int v20; // r0
  char *v21; // r3
  char *v22; // r3
  char *v23; // r3
  char *v24; // r3
  char *v25; // r3
  char *v26; // r3
  char *v27; // r3
  char *v28; // r3
  char *v29; // r3
  char *v30; // r3
  char *v31; // r3

  v3 = *a1;
  v5 = (unsigned __int8)**a1;
  switch ( **a1 )
  {
    case 10:
      v11 = (unsigned __int8 *)(v3 + 1);
      result = 0;
      goto LABEL_14;
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
      if ( a2 )
      {
        next_free = a2->next_free;
        if ( a2->chunk_limit == next_free )
        {
          obstack_newchunk(a2, 1);
          next_free = a2->next_free;
        }
        *next_free = 92;
        ++a2->next_free;
        v5 = (unsigned __int8)*v3;
      }
      v7 = v3 + 3;
      if ( (unsigned int)(v5 - 48) > 7 )
        goto LABEL_26;
      break;
    case 85:
    case 117:
      if ( v5 == 85 )
        v14 = 8;
      else
        v14 = 4;
      if ( a2 )
      {
        v15 = a2->next_free;
        if ( a2->chunk_limit == v15 )
        {
          obstack_newchunk(a2, 1);
          v15 = a2->next_free;
        }
        a2->next_free = v15 + 1;
        *v15 = 92;
        v16 = a2->next_free;
        if ( a2->chunk_limit == v16 )
        {
          obstack_newchunk(a2, 1);
          v16 = a2->next_free;
        }
        a2->next_free = v16 + 1;
        *v16 = *v3;
      }
      v17 = v3 + 1;
      v18 = isxdigit((unsigned __int8)v3[1]);
      if ( !v18 )
        sub_946E0("\\%c escape without a following hex digit", v5);
      v19 = (unsigned __int8 *)&v3[v14];
      while ( 1 )
      {
        v7 = v17;
        if ( !v18 )
          break;
        if ( a2 )
        {
          v21 = a2->next_free;
          if ( a2->chunk_limit == v21 )
          {
            obstack_newchunk(a2, 1);
            v21 = a2->next_free;
          }
          a2->next_free = v21 + 1;
          *v21 = *v17;
        }
        v7 = v17 + 1;
        if ( v17 == (char *)v19 )
          break;
        v20 = (unsigned __int8)*++v17;
        v18 = isxdigit(v20);
      }
      goto LABEL_12;
    case 92:
      if ( a2 )
      {
        v22 = a2->next_free;
        if ( (unsigned int)(a2->chunk_limit - v22) <= 1 )
        {
          obstack_newchunk(a2, 2);
          v22 = a2->next_free;
        }
        *(_WORD *)v22 = *(_WORD *)"\\\\";
        a2->next_free += 2;
      }
      goto LABEL_81;
    case 97:
      if ( a2 )
      {
        v23 = a2->next_free;
        if ( a2->chunk_limit == v23 )
        {
          obstack_newchunk(a2, 1);
          v23 = a2->next_free;
        }
        a2->next_free = v23 + 1;
        *v23 = 7;
      }
      goto LABEL_81;
    case 98:
      if ( a2 )
      {
        v24 = a2->next_free;
        if ( a2->chunk_limit == v24 )
        {
          obstack_newchunk(a2, 1);
          v24 = a2->next_free;
        }
        a2->next_free = v24 + 1;
        *v24 = 8;
      }
      goto LABEL_81;
    case 101:
      if ( a2 )
      {
        v26 = a2->next_free;
        if ( a2->chunk_limit == v26 )
        {
          obstack_newchunk(a2, 1);
          v26 = a2->next_free;
        }
        a2->next_free = v26 + 1;
        *v26 = 27;
      }
      goto LABEL_81;
    case 102:
      if ( a2 )
      {
        v28 = a2->next_free;
        if ( a2->chunk_limit == v28 )
        {
          obstack_newchunk(a2, 1);
          v28 = a2->next_free;
        }
        a2->next_free = v28 + 1;
        *v28 = 12;
      }
      goto LABEL_81;
    case 110:
      if ( a2 )
      {
        v25 = a2->next_free;
        if ( a2->chunk_limit == v25 )
        {
          obstack_newchunk(a2, 1);
          v25 = a2->next_free;
        }
        a2->next_free = v25 + 1;
        *v25 = 10;
      }
      goto LABEL_81;
    case 114:
      if ( a2 )
      {
        v29 = a2->next_free;
        if ( a2->chunk_limit == v29 )
        {
          obstack_newchunk(a2, 1);
          v29 = a2->next_free;
        }
        a2->next_free = v29 + 1;
        *v29 = 13;
      }
      goto LABEL_81;
    case 116:
      if ( a2 )
      {
        v27 = a2->next_free;
        if ( a2->chunk_limit == v27 )
        {
          obstack_newchunk(a2, 1);
          v27 = a2->next_free;
        }
        a2->next_free = v27 + 1;
        *v27 = 9;
      }
      goto LABEL_81;
    case 118:
      if ( a2 )
      {
        v30 = a2->next_free;
        if ( a2->chunk_limit == v30 )
        {
          obstack_newchunk(a2, 1);
          v30 = a2->next_free;
        }
        a2->next_free = v30 + 1;
        *v30 = 11;
      }
      goto LABEL_81;
    case 120:
      if ( a2 )
      {
        v6 = *(_QWORD *)&a2->next_free;
        if ( (unsigned int)(HIDWORD(v6) - v6) <= 1 )
        {
          obstack_newchunk(a2, 2);
          LODWORD(v6) = a2->next_free;
        }
        *(_WORD *)v6 = *(_WORD *)"\\x";
        a2->next_free += 2;
      }
      v7 = v3 + 1;
      if ( !isxdigit((unsigned __int8)v3[1]) )
        sub_946E0("\\x escape without a following hex digit");
      do
      {
        if ( a2 )
        {
          v8 = a2->next_free;
          if ( a2->chunk_limit == v8 )
          {
            obstack_newchunk(a2, 1);
            v8 = a2->next_free;
          }
          a2->next_free = v8 + 1;
          *v8 = *v7;
        }
        v9 = (unsigned __int8)*++v7;
      }
      while ( isxdigit(v9) );
      goto LABEL_12;
    default:
      if ( a2 )
      {
        v31 = a2->next_free;
        if ( a2->chunk_limit == v31 )
        {
          obstack_newchunk(a2, 1);
          v31 = a2->next_free;
        }
        a2->next_free = v31 + 1;
        *v31 = *v3;
      }
LABEL_81:
      *a1 = v3 + 1;
      return 1;
  }
  do
  {
    if ( a2 )
    {
      v13 = a2->next_free;
      if ( a2->chunk_limit == v13 )
      {
        obstack_newchunk(a2, 1);
        v13 = a2->next_free;
      }
      a2->next_free = v13 + 1;
      *v13 = *v3;
    }
    if ( v7 == ++v3 )
    {
LABEL_12:
      *a1 = v7;
      return 1;
    }
  }
  while ( (unsigned int)(unsigned __int8)*v3 - 48 <= 7 );
LABEL_26:
  v11 = (unsigned __int8 *)v3;
  result = 1;
LABEL_14:
  *a1 = (char *)v11;
  return result;
}
