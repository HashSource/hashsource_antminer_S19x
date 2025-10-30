char *__fastcall sub_320EC4(unsigned int a1)
{
  if ( a1 == 49 )
    return "DW_TAG_thrown_type";
  if ( a1 <= 0x31 )
  {
    if ( a1 == 27 )
      return "DW_TAG_common_inclusion";
    if ( a1 > 0x1B )
    {
      if ( a1 == 38 )
      {
        return "DW_TAG_const_type";
      }
      else if ( a1 <= 0x26 )
      {
        if ( a1 == 32 )
        {
          return "DW_TAG_set_type";
        }
        else if ( a1 <= 0x20 )
        {
          if ( a1 == 29 )
          {
            return "DW_TAG_inlined_subroutine";
          }
          else if ( a1 >= 0x1D )
          {
            if ( a1 == 30 )
              return "DW_TAG_module";
            else
              return "DW_TAG_ptr_to_member_type";
          }
          else
          {
            return "DW_TAG_inheritance";
          }
        }
        else if ( a1 == 35 )
        {
          return "DW_TAG_access_declaration";
        }
        else if ( a1 > 0x23 )
        {
          if ( a1 == 36 )
            return "DW_TAG_base_type";
          else
            return "DW_TAG_catch_block";
        }
        else if ( a1 == 33 )
        {
          return "DW_TAG_subrange_type";
        }
        else
        {
          return "DW_TAG_with_stmt";
        }
      }
      else if ( a1 == 43 )
      {
        return "DW_TAG_namelist";
      }
      else if ( a1 <= 0x2B )
      {
        if ( a1 == 40 )
        {
          return "DW_TAG_enumerator";
        }
        else if ( a1 >= 0x28 )
        {
          if ( a1 == 41 )
            return "DW_TAG_file_type";
          else
            return "DW_TAG_friend";
        }
        else
        {
          return "DW_TAG_constant";
        }
      }
      else if ( a1 == 46 )
      {
        return "DW_TAG_subprogram";
      }
      else if ( a1 > 0x2E )
      {
        if ( a1 == 47 )
          return "DW_TAG_template_type_param";
        else
          return "DW_TAG_template_value_param";
      }
      else if ( a1 == 44 )
      {
        return "DW_TAG_namelist_item";
      }
      else
      {
        return "DW_TAG_packed_type";
      }
    }
    else
    {
      if ( a1 == 15 )
        return "DW_TAG_pointer_type";
      if ( a1 <= 0xF )
      {
        if ( a1 == 4 )
          return "DW_TAG_enumeration_type";
        if ( a1 > 4 )
        {
          if ( a1 == 10 )
            return "DW_TAG_label";
          if ( a1 > 0xA )
          {
            if ( a1 == 11 )
              return "DW_TAG_lexical_block";
            if ( a1 == 13 )
              return "DW_TAG_member";
          }
          else
          {
            if ( a1 == 5 )
              return "DW_TAG_formal_parameter";
            if ( a1 == 8 )
              return "DW_TAG_imported_declaration";
          }
          return 0;
        }
        if ( a1 == 1 )
        {
          return "DW_TAG_array_type";
        }
        else if ( a1 )
        {
          if ( a1 == 2 )
            return "DW_TAG_class_type";
          else
            return "DW_TAG_entry_point";
        }
        else
        {
          return "DW_TAG_padding";
        }
      }
      else
      {
        if ( a1 == 21 )
          return "DW_TAG_subroutine_type";
        if ( a1 <= 0x15 )
        {
          if ( a1 == 17 )
            return "DW_TAG_compile_unit";
          if ( a1 < 0x11 )
            return "DW_TAG_reference_type";
          if ( a1 == 18 )
            return "DW_TAG_string_type";
          if ( a1 == 19 )
            return "DW_TAG_structure_type";
          return 0;
        }
        if ( a1 == 24 )
        {
          return "DW_TAG_unspecified_parameters";
        }
        else if ( a1 > 0x18 )
        {
          if ( a1 == 25 )
            return "DW_TAG_variant";
          else
            return "DW_TAG_common_block";
        }
        else if ( a1 == 22 )
        {
          return "DW_TAG_typedef";
        }
        else
        {
          return "DW_TAG_union_type";
        }
      }
    }
  }
  else
  {
    if ( a1 == 72 )
      return "DW_TAG_call_site";
    if ( a1 > 0x48 )
    {
      if ( a1 == 16644 )
        return "DW_TAG_GNU_BINCL";
      if ( a1 <= 0x4104 )
      {
        if ( a1 == 16528 )
          return "DW_TAG_HP_array_descriptor";
        if ( a1 <= 0x4090 )
        {
          if ( a1 == 74 )
            return "DW_TAG_skeleton_unit";
          if ( a1 < 0x4A )
            return "DW_TAG_call_site_parameter";
          if ( a1 == 75 )
            return "DW_TAG_immutable_type";
          if ( a1 == 16513 )
            return "DW_TAG_MIPS_loop";
          return 0;
        }
        if ( a1 == 16641 )
          return "DW_TAG_format_label";
        if ( a1 <= 0x4101 )
        {
          if ( a1 == 16529 )
            return "DW_TAG_HP_Bliss_field";
          if ( a1 == 16530 )
            return "DW_TAG_HP_Bliss_field_set";
          return 0;
        }
        if ( a1 == 16642 )
          return "DW_TAG_function_template";
        else
          return "DW_TAG_class_template";
      }
      else
      {
        if ( a1 == 16650 )
          return "DW_TAG_GNU_call_site_parameter";
        if ( a1 > 0x410A )
        {
          if ( a1 == 34663 )
            return "DW_TAG_upc_relaxed_type";
          if ( a1 > 0x8767 )
          {
            if ( a1 == 40960 )
              return "DW_TAG_PGI_kanji_type";
            if ( a1 == 40992 )
              return "DW_TAG_PGI_interface_block";
          }
          else
          {
            if ( a1 == 34661 )
              return "DW_TAG_upc_shared_type";
            if ( a1 == 34662 )
              return "DW_TAG_upc_strict_type";
          }
          return 0;
        }
        if ( a1 == 16647 )
        {
          return "DW_TAG_GNU_template_parameter_pack";
        }
        else if ( a1 > 0x4107 )
        {
          if ( a1 == 16648 )
            return "DW_TAG_GNU_formal_parameter_pack";
          else
            return "DW_TAG_GNU_call_site";
        }
        else if ( a1 == 16645 )
        {
          return "DW_TAG_GNU_EINCL";
        }
        else
        {
          return "DW_TAG_GNU_template_template_param";
        }
      }
    }
    else
    {
      if ( a1 == 60 )
        return "DW_TAG_partial_unit";
      if ( a1 > 0x3C )
      {
        if ( a1 == 66 )
          return "DW_TAG_rvalue_reference_type";
        if ( a1 > 0x42 )
        {
          if ( a1 == 69 )
            return "DW_TAG_generic_subrange";
          if ( a1 > 0x45 )
          {
            if ( a1 == 70 )
              return "DW_TAG_dynamic_type";
            else
              return "DW_TAG_atomic_type";
          }
          else if ( a1 == 67 )
          {
            return "DW_TAG_template_alias";
          }
          else
          {
            return "DW_TAG_coarray_type";
          }
        }
        if ( a1 == 63 )
          return "DW_TAG_condition";
        if ( a1 > 0x3F )
        {
          if ( a1 == 64 )
            return "DW_TAG_shared_type";
          else
            return "DW_TAG_type_unit";
        }
        if ( a1 == 61 )
          return "DW_TAG_imported_unit";
        return 0;
      }
      if ( a1 == 54 )
      {
        return "DW_TAG_dwarf_procedure";
      }
      else if ( a1 <= 0x36 )
      {
        if ( a1 == 51 )
        {
          return "DW_TAG_variant_part";
        }
        else if ( a1 >= 0x33 )
        {
          if ( a1 == 52 )
            return "DW_TAG_variable";
          else
            return "DW_TAG_volatile_type";
        }
        else
        {
          return "DW_TAG_try_block";
        }
      }
      else if ( a1 == 57 )
      {
        return "DW_TAG_namespace";
      }
      else if ( a1 > 0x39 )
      {
        if ( a1 == 58 )
          return "DW_TAG_imported_module";
        else
          return "DW_TAG_unspecified_type";
      }
      else if ( a1 == 55 )
      {
        return "DW_TAG_restrict_type";
      }
      else
      {
        return "DW_TAG_interface_type";
      }
    }
  }
}
