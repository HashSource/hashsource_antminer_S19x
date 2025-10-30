int __fastcall sub_1A6444(int result)
{
  const char *v1; // r7
  int *i; // r8
  __int64 v3; // r4
  int v4; // r3
  unsigned int v5; // r6
  int v6; // r11
  int v7; // r10
  char *v8; // r9
  int v9; // r0
  int v10; // r0
  __int64 v11; // r2
  int v12; // r11
  int v13; // r0
  int v14; // r12
  int v15; // r11
  int v16; // r0
  int v17; // [sp+Ch] [bp-10h]
  int v18; // [sp+Ch] [bp-10h]
  int v19; // [sp+10h] [bp-Ch]

  v1 = (const char *)result;
  if ( *(_DWORD *)(dword_487D2C + 8) )
  {
    sub_259F10("Exec file:\n");
    sub_259F10("    `%s', ", **(const char ***)(dword_487D2C + 8));
    sub_259B58("        ");
    sub_259F10("file type %s.\n", **(const char ***)(*(_DWORD *)(dword_487D2C + 8) + 4));
    if ( v1 && *v1 && sub_1A6008((int)v1, "ALLOBJ") )
    {
      result = strcmp(v1, "ALLOBJ");
      if ( !result )
        v1 = 0;
      for ( i = *(int **)(dword_487D2C + 36); i; i = (int *)*i )
      {
        result = sub_259F10("  Object file: %s\n", *(_DWORD *)i[9]);
        v3 = *((_QWORD *)i + 21);
        if ( (unsigned int)v3 < HIDWORD(v3) )
        {
          LODWORD(v3) = v3 + 12;
          do
          {
            v4 = *(_DWORD *)(v3 - 12);
            v5 = v3;
            if ( v4 )
            {
              v6 = i[9];
              v7 = *(_DWORD *)(v4 + 20);
              v8 = *(char **)v4;
              if ( !v1 || !*v1 || sub_1A6008((int)v1, v8) || (result = sub_1A61B0((int)v1, v7)) != 0 )
              {
                v9 = sub_B8324(v6);
                v10 = ((int (__fastcall *)(int))loc_16666C)(v9);
                v11 = *(_QWORD *)(v3 - 12);
                HIDWORD(v3) = v10;
                v12 = *(_DWORD *)(HIDWORD(v11) + 144);
                v17 = *(_DWORD *)(v11 + 28);
                v13 = sub_162FDC(*(_DWORD *)(HIDWORD(v11) + 36), *(_DWORD *)(v3 - 12));
                v14 = *(_DWORD *)(v3 - 8);
                v19 = v17 + *(_DWORD *)(v12 + 4 * v13);
                v15 = *(_DWORD *)(*(_DWORD *)(v3 - 12) + 28) + *(_DWORD *)(*(_DWORD *)(v3 - 12) + 36);
                v18 = *(_DWORD *)(v14 + 144);
                v16 = sub_162FDC(*(_DWORD *)(v14 + 36), *(_DWORD *)(v3 - 12));
                result = sub_1A5E54(
                           v8,
                           v7,
                           v19,
                           v15 + *(_DWORD *)(v18 + 4 * v16),
                           *(_DWORD *)(*(_DWORD *)(v3 - 12) + 80),
                           SHIDWORD(v3) / 8);
                HIDWORD(v3) = i[43];
              }
            }
            LODWORD(v3) = v3 + 12;
          }
          while ( HIDWORD(v3) > v5 );
        }
      }
    }
    else
    {
      result = sub_2ADCFC(*(_DWORD *)(dword_487D2C + 8), 1729404, v1);
    }
  }
  if ( dword_47ACB8 )
  {
    sub_259F10("Core file:\n");
    sub_259F10("    `%s', ", *(const char **)dword_47ACB8);
    sub_259B58("        ");
    sub_259F10("file type %s.\n", **(const char ***)(dword_47ACB8 + 4));
    return sub_2ADCFC(dword_47ACB8, sub_1A637C, v1);
  }
  return result;
}
