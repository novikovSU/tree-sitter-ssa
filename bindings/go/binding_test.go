package tree_sitter_ssa_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-ssa"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_ssa.Language())
	if language == nil {
		t.Errorf("Error loading Ssa grammar")
	}
}
