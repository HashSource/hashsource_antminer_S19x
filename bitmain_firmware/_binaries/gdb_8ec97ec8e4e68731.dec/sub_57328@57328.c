int *__fastcall sub_57328(const char **a1)
{
  char *v1; // r5
  char *v3; // r0
  char *v4; // r6
  char *v5; // r4
  bool v6; // zf
  int *v7; // r6
  int v8; // r4
  bool v9; // r0
  int v11; // t1
  _BYTE *v13; // r1
  unsigned __int8 *v14; // [sp+Ch] [bp-20h] BYREF
  void *ptr; // [sp+10h] [bp-1Ch] BYREF
  _BYTE v16[16]; // [sp+18h] [bp-14h] BYREF

  v1 = (char *)*a1;
  if ( !*a1 )
    sub_51E9C("name of command to define");
  v3 = &v1[strlen(*a1)];
  if ( v1 >= v3 )
  {
LABEL_22:
    v5 = v3;
  }
  else
  {
    v4 = v3;
    while ( 1 )
    {
      v5 = v4;
      v6 = isspace((unsigned __int8)*--v4) == 0;
      v3 = v4;
      if ( v6 )
        break;
      if ( v1 == v4 )
        goto LABEL_22;
    }
    if ( v1 < v5 )
    {
      while ( v1 != --v5 )
      {
        if ( isspace((unsigned __int8)*(v5 - 1)) )
          goto LABEL_23;
      }
      goto LABEL_11;
    }
  }
LABEL_23:
  if ( v1 == v5 )
  {
LABEL_11:
    v7 = &dword_474744;
    goto LABEL_12;
  }
  ptr = v16;
  sub_57278(&ptr, v1, (int)(v5 - 1));
  v14 = (unsigned __int8 *)ptr;
  v7 = *(int **)(sub_544C8(&v14, dword_474744, "", 0, 1) + 52);
  v13 = ptr;
  if ( !v7 )
    sub_946E0("\"%s\" is not a prefix command.", (const char *)ptr);
  *a1 = v5;
  if ( v13 == v16 )
  {
    v1 = v5;
  }
  else
  {
    sub_339E64(v13);
    v1 = (char *)*a1;
  }
LABEL_12:
  v8 = (unsigned __int8)*v1;
  if ( *v1 )
  {
    do
    {
      if ( isalnum(v8) )
        v9 = 0;
      else
        v9 = v8 != 45;
      if ( v8 != 95 && v9 )
        sub_946E0("Junk in argument list: \"%s\"", v1);
      v11 = (unsigned __int8)*++v1;
      v8 = v11;
    }
    while ( v11 );
  }
  return v7;
}
