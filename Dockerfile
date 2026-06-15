FROM ghcr.io/xu-cheng/texlive-full:latest

# Set working directory inside the container to match compile.yml working_directory
WORKDIR /workspace/ejercicios

# Default command to compile guia.tex using latexmk, matching the default action options
CMD ["latexmk", "-pdf", "-file-line-error", "-halt-on-error", "-interaction=nonstopmode", "guia.tex"]
